#pragma once
#include "../../Core/Modules/ModuleBase.hpp"

constexpr const char* CLIP_MODULE_NAME = "CLIP";

class ClipModule final : public ModuleBase
{
public:
	explicit ClipModule(ModulesManager* const modules, HooksManager* const hooks, Config& cfg);

	void Run() override;
};