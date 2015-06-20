//Copyright Paul Reiche, Fred Ford. 1992-2002

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "starcon.h"

static DWORD
GetMelnormeRef (void)
{
	BYTE b0, b1, b2, b3;

	switch (CurStarDescPtr->Index)
	{
		case MELNORME0_DEFINED:
			b0 = GET_GAME_STATE (MELNORME0_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME0_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME0_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME0_GRPOFFS3);
			break;
		case MELNORME1_DEFINED:
			b0 = GET_GAME_STATE (MELNORME1_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME1_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME1_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME1_GRPOFFS3);
			break;
		case MELNORME2_DEFINED:
			b0 = GET_GAME_STATE (MELNORME2_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME2_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME2_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME2_GRPOFFS3);
			break;
		case MELNORME3_DEFINED:
			b0 = GET_GAME_STATE (MELNORME3_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME3_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME3_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME3_GRPOFFS3);
			break;
		case MELNORME4_DEFINED:
			b0 = GET_GAME_STATE (MELNORME4_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME4_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME4_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME4_GRPOFFS3);
			break;
		case MELNORME5_DEFINED:
			b0 = GET_GAME_STATE (MELNORME5_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME5_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME5_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME5_GRPOFFS3);
			break;
		case MELNORME6_DEFINED:
			b0 = GET_GAME_STATE (MELNORME6_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME6_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME6_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME6_GRPOFFS3);
			break;
		case MELNORME7_DEFINED:
			b0 = GET_GAME_STATE (MELNORME7_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME7_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME7_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME7_GRPOFFS3);
			break;
		case MELNORME8_DEFINED:
			b0 = GET_GAME_STATE (MELNORME8_GRPOFFS0);
			b1 = GET_GAME_STATE (MELNORME8_GRPOFFS1);
			b2 = GET_GAME_STATE (MELNORME8_GRPOFFS2);
			b3 = GET_GAME_STATE (MELNORME8_GRPOFFS3);
			break;
	}

	return (MAKE_DWORD (MAKE_WORD (b0, b1), MAKE_WORD (b2, b3)));
}

static void
SetMelnormeRef (DWORD Ref)
{
	BYTE b0, b1, b2, b3;

	b0 = LOBYTE (LOWORD (Ref));
	b1 = HIBYTE (LOWORD (Ref));
	b2 = LOBYTE (HIWORD (Ref));
	b3 = HIBYTE (HIWORD (Ref));
	switch (CurStarDescPtr->Index)
	{
		case MELNORME0_DEFINED:
			SET_GAME_STATE (MELNORME0_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME0_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME0_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME0_GRPOFFS3, b3);
			break;
		case MELNORME1_DEFINED:
			SET_GAME_STATE (MELNORME1_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME1_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME1_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME1_GRPOFFS3, b3);
			break;
		case MELNORME2_DEFINED:
			SET_GAME_STATE (MELNORME2_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME2_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME2_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME2_GRPOFFS3, b3);
			break;
		case MELNORME3_DEFINED:
			SET_GAME_STATE (MELNORME3_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME3_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME3_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME3_GRPOFFS3, b3);
			break;
		case MELNORME4_DEFINED:
			SET_GAME_STATE (MELNORME4_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME4_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME4_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME4_GRPOFFS3, b3);
			break;
		case MELNORME5_DEFINED:
			SET_GAME_STATE (MELNORME5_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME5_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME5_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME5_GRPOFFS3, b3);
			break;
		case MELNORME6_DEFINED:
			SET_GAME_STATE (MELNORME6_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME6_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME6_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME6_GRPOFFS3, b3);
			break;
		case MELNORME7_DEFINED:
			SET_GAME_STATE (MELNORME7_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME7_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME7_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME7_GRPOFFS3, b3);
			break;
		case MELNORME8_DEFINED:
			SET_GAME_STATE (MELNORME8_GRPOFFS0, b0);
			SET_GAME_STATE (MELNORME8_GRPOFFS1, b1);
			SET_GAME_STATE (MELNORME8_GRPOFFS2, b2);
			SET_GAME_STATE (MELNORME8_GRPOFFS3, b3);
			break;
	}
}

void
GenerateMelnorme (BYTE control)
{
	switch (control)
	{
		case INIT_NPCS:
			GLOBAL (BattleGroupRef) = GetMelnormeRef ();
			if (GLOBAL (BattleGroupRef) == 0)
			{
				CloneShipFragment (MELNORME_SHIP,
						&GLOBAL (npc_built_ship_q), 0);
				GLOBAL (BattleGroupRef) = PutGroupInfo (~0L, 1);
				SetMelnormeRef (GLOBAL (BattleGroupRef));
			}
			GenerateRandomIP (INIT_NPCS);
			break;
		default:
			GenerateRandomIP (control);
			break;
	}
}

