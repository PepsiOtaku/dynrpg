#ifndef DYNRPG_HERO_PAN_TRANSITION_SPEED_H
#define DYNRPG_HERO_PAN_TRANSITION_SPEED_H

namespace RPG
{
//! Hero pan speed (see RPG::Hero::panTransitionSpeed)
enum HeroPanTransitionSpeed
{
	HPTS_ONE_EIGHTH_NORMAL = 4,
	HPTS_ONE_FOURTH_NORMAL = 8,
	HPTS_ONE_HALF_NORMAL = 16,
	HPTS_NORMAL = 32,
	HPTS_TWICE_NORMAL = 64,
	HPTS_FOUR_TIMES_NORMAL = 128
};
}

#endif // DYNRPG_HERO_PAN_TRANSITION_SPEED_H