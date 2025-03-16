// Modify this file to change what commands output to your statusbar, and recompile using the make command.                                  
static const Block blocks[] = {                                                                                                             
    /*Icon*/        		/*Command*/                     /*Update Interval*/     /*Update Signal*/                   
 
    {"^c#a7c080^   ", 		"~/.local/share/bin/updates.sh", 	3600, 		0},
    {"^c#e67e80^ CPU ", 	"~/.local/share/bin/cpu.sh", 		2, 		0},                                             
    {"^c#e69875^  ", 		"~/.local/share/bin/mem.sh", 		2, 		0}, 
    {"^c#d699b6^  ",		"~/.local/share/bin/net.sh",		1,		0},
    {"^c#7fbbb3^ VOL ", 	"~/.local/share/bin/vol.sh", 		0, 		5},                                                               
    {"^c#83c092^ 󱑆 ",	 	"~/.local/share/bin/clock.sh", 		60, 		0},                                                                            
};                                                                                                                                          

// sets delimiter between status commands. NULL character ('\0') means no delimiter.                                                         
static char delim[] = " ";                                                                                                                  
static unsigned int delimLen = 5; 

