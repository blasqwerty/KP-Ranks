/*
    KPR_fnc_updatePlayer

    File: fn_updatePlayer.sqf
    Author: Wyqer - https://github.com/KillahPotatoes
    Date: 2018-07-12
    Last Update: 2018-07-13
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Updates the player name of a player in the player list.

    Parameter(s):
        0: ARRAY - Array of player UID and actual name, e.g [Name, Steam UID]

    Returns:
    BOOL
*/

if (!isServer) exitWith {};

params [["_update",[]]];

if (_update isEqualTo []) exitWith {diag_log "[KP RANKS] [SERVER] KPR_fnc_updatePlayer called with no data provided.";};

private _index = KPR_players findIf {_x select 1 == _update select 1};
KPR_players select _index set [0, _update select 0];
publicVariable "KPR_players";

true
