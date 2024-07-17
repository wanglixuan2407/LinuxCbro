#include <stdio.h>
#include <string.h>  //string functions :Windows different from Linux!!


int main()
{
    char str1[30]="Bro"; //If char str1[],the result will be wrong!!  
                            //Different from windows system
    char str2[]="Code";
    //strlwr(str1); // NOT standard function. Limited! BUT:Windows:normal
    //strupr(str1);
    strcat(str1, str2);
    strncat(str1,str2,1);
    printf("%s\n",str1);
    return 0;
    //I will use Windows System instead of Linux. Multi-file,Multi-Lib compilation is complex
    //Some Libs on my Linux are different from those on WIndows System,such as string.h.  
    /*Linux will be a gcc-conmand learning platform as well as a file-trasmit station from Windows to GitHub because there is high possibility of failure for direct transmission.*/
    /*2024.7.17 10:07*/ 
}