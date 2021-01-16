//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/											/*Update Interval*/	/*Update Signal*/
	{"💾 ", "sb-disk",														300,				0},

	{"🔊 ", "sb-volume",													5,					1},

    {"🧠 ", "sb-ram",														30,					0},

	{"🕐 ", "sb-time",														5,					0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 3;
