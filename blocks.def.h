//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	{ "", "~/.local/bin/wifi", 		10, 			0},

	{" 󰍛 ", "~/.local/bin/memory",	      	6,		        1},

	{ "", "~/.local/bin/battery", 		5, 			0},

	{" 󰕾 ", "~/.local/bin/volume",	      	2,		        10},

	{" 󱁳 ", "~/.local/bin/clock",		5,		        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

