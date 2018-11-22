#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
int kmain()
{
       clearscreen();
       print("Welcome to NIDOS operating system\nPlease enter a command\n");
       while (1)
       {
                print("\nNIDOS> ");

                string ch = readStr();
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are allready in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearscreen();
                }
		else if(strEql(ch,"nahin"))
                {
                        print("\nnahi is here!\n");
                }

                else
                {
                        print("\nBad command!\n");
                }

                print("\n");
       }

}
