/*
    KP Ranks dialog defines

    File: KPR_dialogs.hpp
    Author: Wyqer - https://github.com/KillahPotatoes
    Date: 2018-07-10
    Last Update: 2018-07-12
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Defines of the dialogs which are used in the KP Ranks mod.
*/

class KPR_playerList {
    idd = 7580821;
    movingEnable = 0;

    class controlsBackground {
        class KPR_DialogTitle: KP_DialogTitle {
            text = "$STR_KPR_DIALOG_PLAYERMANAGE";
        };

        class KPR_DialogBackground: KP_DialogBackground {};
    };

    class controls {
        class KPR_DialogCross: KP_DialogCross {};

        class KPR_ControlsGroup: KP_ControlsGroup {
            idc = 1;
            x = KP_GUI_POS_X_CONTENT;
            y = KP_GUI_POS_Y_CONTENT;
            w = KP_GUI_WIDTH_CONTENT;
            h = KP_GUI_HEIGHT_CONTENT;

            class controls {
                class KPR_HeaderBackground: KP_Text {
                    colorBackground[] = KP_GUI_COLOR_BACKGROUND;
                    x = 0;
                    y = 0;
                    w = KP_GUI_WIDTH_CONTENT;
                    h = safeZoneH * 0.04;
                };

                class KPR_HeaderName: KP_Text {
                    style = 2;
                    text = "$STR_KPR_DIALOG_PLAYER";
                    x = 0;
                    y = safeZoneH * 0.005;
                    w = safeZoneW * 0.1;
                    h = safeZoneH * 0.03;
                    sizeEx = KP_GUI_TEXT_L;
                };

                class KPR_HeaderAdmin: KPR_HeaderName {
                    text = "$STR_KPR_DIALOG_ADMIN";
                    x = safeZoneW * 0.1;
                };

                class KPR_HeaderRank: KPR_HeaderName {
                    text = "$STR_KPR_DIALOG_RANK";
                    x = safeZoneW * 0.2;
                };

                class KPR_HeaderNation: KPR_HeaderName {
                    text = "$STR_KPR_DIALOG_NATION";
                    x = safeZoneW * 0.3;
                };
            };
        };

        class KPR_DialogButtonS1: KP_DialogButtonS1 {
            text = "$STR_KPR_DIALOG_WIPE";
            tooltip = "$STR_KPR_DIALOG_WIPEDESC";
            action = "KPR_playerWipe = 1";
        };

        class KPR_DialogButtonS2: KP_DialogButtonS2 {
            text = "$STR_KPR_DIALOG_IMPORT";
            tooltip = "$STR_KPR_DIALOG_IMPORTDESC";
            action = "KPR_playerImport = 1";
        };

        class KPR_DialogButtonS3: KP_DialogButtonS3 {
            text = "$STR_KPR_DIALOG_EXPORT";
            tooltip = "$STR_KPR_DIALOG_EXPORTDESC";
            action = "KPR_playerExport = 1";
        };

        class KPR_DialogButtonS4: KP_DialogButtonS4 {
            text = "$STR_KPR_DIALOG_SAVE";
            tooltip = "$STR_KPR_DIALOG_SAVEDESC";
            action = "KPR_playerSave = 1";
        };
    };
};

class KPR_uniformList {
    idd = 7580822;
    movingEnable = 0;

    class controlsBackground {
        class KPR_DialogTitle: KP_DialogTitle {
            text = "KP Ranks - Uniform Management";
        };

        class KPR_DialogBackground: KP_DialogBackground {};
    };

    class controls {
        class KPR_DialogCross: KP_DialogCross {};

        class KPR_DialogButtonS1: KP_DialogButtonS1 {
            text = "$STR_KPR_DIALOG_WIPE";
            tooltip = "$STR_KPR_DIALOG_WIPEDESC";
            action = "KPR_playerWipe = 1";
        };

        class KPR_DialogButtonS2: KP_DialogButtonS2 {
            text = "$STR_KPR_DIALOG_IMPORT";
            tooltip = "$STR_KPR_DIALOG_IMPORTDESC";
            action = "KPR_playerImport = 1";
        };

        class KPR_DialogButtonS3: KP_DialogButtonS3 {
            text = "$STR_KPR_DIALOG_EXPORT";
            tooltip = "$STR_KPR_DIALOG_EXPORTDESC";
            action = "KPR_playerExport = 1";
        };

        class KPR_DialogButtonS4: KP_DialogButtonS4 {
            text = "$STR_KPR_DIALOG_SAVE";
            tooltip = "$STR_KPR_DIALOG_SAVEDESC";
            action = "KPR_playerSave = 1";
        };
    };
};