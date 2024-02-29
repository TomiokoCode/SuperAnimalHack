#pragma once
#include <nlohmann/json.hpp>

struct Config
{
	bool bRenderFinished = false;
	bool bEspOnTeammates = false;
	bool bZoomOverride = false;
	bool bEspOnEnemies = false;
	bool bUnloadCheat = false;
	bool bSpeedhack = false;
	bool bSnaplines = false;
	bool bHealthBar = false;
	bool bArmorBar = false;
	bool bNoRecoil = false;
	bool bBoxes = false;
	bool bBhop = false;
	bool bEsp = false;
	bool bClip = false;
	bool bHandsFuck = false;

	const float fZoomDefaultValue = 67.5f;

	float fZoomOverrideValue = fZoomDefaultValue;
	float fNearSnaplineRenderDistance = 200.0f;
	float fMaxSnaplineRenderDistance = 500.0f;
	float fClipDistance = 10.0f;
	int iSnaplinesMaximumCount = 0;

	NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(
		Config,
		fNearSnaplineRenderDistance,
		fMaxSnaplineRenderDistance,
		fZoomOverrideValue,
		fClipDistance,
		bEspOnTeammates,
		bEspOnEnemies,
		bZoomOverride,
		bSnaplines,
		bHealthBar,
		bSpeedhack,
		bArmorBar,
		bNoRecoil,
		bBoxes,
		bBhop,
		bEsp,
		bHandsFuck,
		bClip
	);
};
