//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	      /*Command*/		  /*Update Interval*/	/*Update Signal*/
  {"",	"/home/noob/.scripts/memory",	  			1,	    1},
  /*{"",  "/home/noob/.scripts/disk",              		3600,       1},*/
  {"",  "/home/noob/.scripts/volume",      			1,          10},
  {"",  "/home/noob/.scripts/nettraf",     			1,          16}, 
  {"",  "/home/noob/.scripts/clock",       			1,          1},
  {"",	"/bin/ttf-clock",					60,	    60},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
