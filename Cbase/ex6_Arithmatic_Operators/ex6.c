#include<stdio.h>

int main()
{
    //arithmatic operators

    // + addition
    // - substraction
    // *multipulication
    // / division
    // % modulus
    // ++ increment  ++x:x=x+1,use the changed value ; x++:x=x+1,use the unchanged value
    // -- decrement

    int x = 5;
    int y = 2;
    float a = 5;
    float b = 2;

    int z = x + y;
    int w = x - y;
    int f = x * y;
    float t = x / y; // If both x and y are integers , the result reserves the integer part.
                     // Otherwise, the result will be an accurate decimal.  
    float g = a / b;
    float h = x / b;
    float k = a / y;
    float n = x / (float)y; //(datatype):change the datatype  
    int c = x % y;

    printf("%d,%d,%d,%.2f,%d\n",z,w,f,t,c); //7,3,10,2.00,1
    printf("%.2f,%.2f,%.2f,%.2f\n",g,h,k,n);//2.50 2.50 2.50 2.50
    printf("%d,%d,%d,%d,%d\n",x++,x++,++y,++x,++x); // 8,7,3,9,9 
    printf("%d,%d\n",x,y);  // 9 3
    
    /*Do not use ++ repeatedly on the same variable in printf*/
    /*In printf, x's final result is calculated , and then printed*/
}