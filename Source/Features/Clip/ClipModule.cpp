#include "ClipModule.hpp"
#include "../../Core/Hooks/HooksManager.hpp"

ClipModule::ClipModule(ModulesManager* const modules, HooksManager* const hooks, Config& cfg)
	: ModuleBase(CLIP_MODULE_NAME, modules, hooks, cfg)
{}

void ClipModule::Run()
{
	if (cfg.bClip)
	{
		auto& ctx = hooks->GetGameContext();

		if (!ctx.localPlayer) return;

		if (ctx.localPlayer->player)
		{
			ctx.localPlayer->player->didHitBunnyHopRoll = true;
		}

		if (GetAsyncKeyState(VK_DOWN) & 1)
		{
			hooks->TransformTranslate2(ctx.localPlayer, Vector3(0.0f, -cfg.fClipDistance, 0.0f));
		}

		if (GetAsyncKeyState(VK_UP) & 1)
		{
			hooks->TransformTranslate2(ctx.localPlayer, Vector3(0.0f, cfg.fClipDistance, 0.0f));
		}

		if (GetAsyncKeyState(VK_LEFT) & 1)
		{
			hooks->TransformTranslate2(ctx.localPlayer, Vector3(-cfg.fClipDistance, 0.0f, 0.0f));
		}

		if (GetAsyncKeyState(VK_RIGHT) & 1)
		{
			hooks->TransformTranslate2(ctx.localPlayer, Vector3(cfg.fClipDistance, 0.0f, 0.0f));
		}
	}
}


