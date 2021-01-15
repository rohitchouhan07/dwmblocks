//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/											/*Update Interval*/	/*Update Signal*/
	{"💾 ", "df -h | grep '^/' | awk '{ print $3\"/\"$2 }'",				300,				0},

	{"🔊 ", "amixer get Master | awk -F'[][]' 'END{ print $2 }'",			5,					1},

    {"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",		30,					0},

	{"🕐 ", "sb-time",														5,					0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 3;
