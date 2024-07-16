#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    double radius;
    double circumference;
    double area;
    double volumn;
    
    printf("Enter the radius:");
    scanf("%lf",&radius);  // %d &  //%s no need of &

    circumference = 2 * PI * radius;
    area = PI * pow(radius,2);
    volumn = PI * 4/3 * pow(radius,3);

    printf("Circle's circumference = %.2f\n",circumference);
    printf("Circle's area = %.2f\n",area);
    printf("Ball's volumn = %.2f\n",volumn);
    return 0;
    /*In the Linux system, even if you include <math.h>,if one or two of variables a,b in pow(a,b) is not the const , there will be an error when compiling.
    Use gcc command line: 
    Inside the ex10_Culc_Circle_Ball folder, gcc ex10.c -lm -o a.exe :compile
    -lm "link" to <math.h>
    (ex10.c : name of the input file ; a.exe :name of the executable program)
    and then ./a.exe : run
    In Windows system,there is no problem like this.*/
}