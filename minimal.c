{
    "include": [
  "$HOME/.config/waybar/Modules",
  "$HOME/.config/waybar/ModulesWorkspaces",
  "$HOME/.config/waybar/ModulesCustom",
  "$HOME/.config/waybar/ModulesGroups",
  "$HOME/.config/waybar/UserModules",
  ],
    "layer": "top",
    "position": "top",
    "height": 20,
    "margin-top": 10,
    "margin-left": 10,
    "margin-right": 10,
    "spacing": 2,

   
    "modules-center": ["clock","pulseaudio", "battery","custom/menu",
	"custom/separator#blank_2",
	"hyprland/workspaces",
	"custom/separator#blank_2",
	
	],
    "modules-right": [
	"custom/separator#blank_2",
	"custom/separator#blank",
	"group/mobo_drawer",
	"custom/power",	],
    "modules-left":["tray"],

    "hyprland/workspaces": {
        "format": "{icon}",
        "on-click": "activate"
    },
    "clock": {
        "format": "{:%H:%M}",

    }
}