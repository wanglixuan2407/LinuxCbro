#include<stdio.h>
#include<string.h>  //string functions <string.h>


int main()
{
    char str1[]="Brother";
    char str2[]="crotde";
    //strlwr(str1);           //convert a string to lowercase
    //strupr(str1);           //convert a string to uppercase
    //strcat(str1, str2);     //append str2 to end of str1
    //strncat(str1,str2,1);   //append n characters from str2 to str1
    //strcpy(str1,str2);      //copy str2 to str1 (delete str1)    
    //strncpy(str1,str2,3);   //copy n characters of str2 to str1  

    //strset(str1,'?');    //set all characters of a string to a given character
    //strnset(str1,'x',1); //set n characters of str1 to a given character
    //strrev(str1);          //reverse a string
    
    //printf("%s\n",str1);   //Operation object：str1(left)

    //int result = strlen(str1);       //return the string length as int
    //int result = strcmp(str1,str2);  //string compare all the characters
                                       //same:0 ; different:not 0(e.g.-1)
    //int result = strncmp(str1,str2,2); //string compare(from left)n characters
    //int result = strcmpi(str1,str2);    //string compare all(ignore u/l case)
    //int result = strnicmp(str1,str2);  
                    /*string compare(from left)n characters(ignore u/l case)*/
    
    //printf("%d",result);
    
    return 0;
}