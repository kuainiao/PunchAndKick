﻿#ifndef __GAME_COMMON_SKILL_H__
#define __GAME_COMMON_SKILL_H__

#define SKILLNAME_A_ATTACK		"A attack"
#define SKILLNAME_B_ATTACK		"B attack"
#define SKILLNAME_JUMP_A_ATTACK		"jump A attack"
#define SKILLNAME_JUMP_B_ATTACK		"jump B attack"
#define SKILLNAME_JUMP_MACH_A_ATTACK	"jump mach A attack"
#define SKILLNAME_JUMP_MACH_B_ATTACK	"jump mach B attack"
#define SKILLNAME_AS_ATTACK		"A sprint attack"
#define SKILLNAME_BS_ATTACK		"B sprint attack"
#define SKILLNAME_MACH_A_ATTACK		"mach A attack"
#define SKILLNAME_MACH_B_ATTACK		"mach B attack"
#define SKILLNAME_A_FINALBLOW		"A final blow"
#define SKILLNAME_B_FINALBLOW		"B final blow"
#define SKILLNAME_JUMP_ELBOW		"jump elbow"
#define SKILLNAME_JUMP_TREAD		"jump tread"
#define SKILLNAME_A_LIFT		"A lift"
#define SKILLNAME_B_LIFT		"B lift"
#define SKILLNAME_MACH_STOMP		"mach stomp"
#define SKILLNAME_BOMBKICK		"bomb kick"
#define SKILLNAME_SPINHIT		"spin hit"

enum SkillPriority_AAttack {
	SKILLPRIORITY_A_LIFT,
	SKILLPRIORITY_MACH_STOMP,
	SKILLPRIORITY_JUMP_ELBOW,
	SKILLPRIORITY_A_FINALBLOW,
	SKILLPRIORITY_SPINHIT,
	SKILLPRIORITY_AS_ATTACK,
	SKILLPRIORITY_JUMP_MACH_A_ATTACK,
	SKILLPRIORITY_JUMP_A_ATTACK,
	SKILLPRIORITY_MACH_A_ATTACK,
	SKILLPRIORITY_A_ATTACK,
};

enum SkillPriority_BAttack {
	SKILLPRIORITY_B_LIFT,
	SKILLPRIORITY_JUMP_TREAD,
	SKILLPRIORITY_B_FINALBLOW,
	SKILLPRIORITY_BOMBKICK,
	SKILLPRIORITY_BS_ATTACK,
	SKILLPRIORITY_MACH_B_ATTACK,
	SKILLPRIORITY_JUMP_MACH_B_ATTACK,
	SKILLPRIORITY_JUMP_B_ATTACK,
	SKILLPRIORITY_B_ATTACK,
};

/** 注册通用技能 */
void CommonSkill_Register(void);

#endif
