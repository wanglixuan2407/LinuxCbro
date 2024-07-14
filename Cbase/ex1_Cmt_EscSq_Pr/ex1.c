// Comment (// /**/)
// EscapeSequence (\n \t \" \' \\) When using " ' \ in printf:Add a \ on the left             
// printf
#include<stdio.h>
int main()
{
    //This is a comment
    
    /*
    This 
    is
    a
    multi-line
    comment
    */

    int a = 1;
    printf("a = %d\n",a);
    printf("1\t2\t3\t4\t5\n");
    printf("\"I like pizza.\" - Abraham Lincoln probably.\n ");
    return 0;
}