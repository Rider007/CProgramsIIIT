#include <stdio.h>
#include <math.h>
//to find and print the roots of a quadratic equation
void main()
{
    printf("Enter the variables of a quadratic equation\n");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    double x1,x2;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("Roots are: %f , %f",x1,x2);
}
