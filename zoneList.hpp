#include"tb_defines.hpp"

zoneList[]=
{
//ID, TEAMSPAWNTYPE, LINK, SYNC, PROFILE, DEPEND, DEPQTY, ZONE_DESC
{0,0,0,{},{},1,{},0},

{1,TEAM_BLUE,		SPAWN_XRAY,		{},		{},	1,	{},	0,	"%3"	},
{2,TEAM_BLUE,		SPAWN_NEVER,	{1,3},	{},	1,	{},	0,	"%1"	},
{3,TEAM_NEUTRAL,	SPAWN_NEVER,	{2,4},	{},	1,	{},	0,	"%1"	},
{4,TEAM_NEUTRAL,	SPAWN_NEVER,	{3,5},	{},	1,	{},	0,	"%1"	},
{5,TEAM_NEUTRAL,	SPAWN_NEVER,	{4,6},	{},	1,	{},	0,	"%1"	},
{6,TEAM_RED,		SPAWN_NEVER,	{5,9},	{},	1,	{},	0,	"%1"	},
{7,TEAM_BLUE,		SPAWN_INSTANT,	{},	{},	1,	{1},	1,	"FB: %1"	},
{8,TEAM_RED,		SPAWN_INSTANT,	{},	{},	1,	{9},	1,	"FB: %1"	},
{9,TEAM_RED,		SPAWN_XRAY,	{},	{},	1,	{},	0,	"%3"		}

};
