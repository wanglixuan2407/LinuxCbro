#include<stdio.h>

int main()
{
    //array = a data structure that can store many values of the same data type.
    //type variable[]
    //Once compiled, the size of arrays cannot be changed

    double prices[] = {5.0,10.0,15.0,25.0,20.0};
    /*
    double price[5];
    price[0]=5.0;
    ...
    price[4]=20.0;
    */

    char name[] = "Bro";  //A string is an array of indivisual characters

    printf("$%.2lf",prices[0]); //index starts with 0

    return 0;
}