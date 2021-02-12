//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",      "volume.sh",       0,                10},
  {"",      "brightness.sh",   0,                11},
  {"",      "battery.sh",      10,                3},
  {"",      "date.sh",         60,                1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
