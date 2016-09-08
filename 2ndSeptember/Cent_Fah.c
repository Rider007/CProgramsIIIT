#include <stdio.h>
//To convert Centigrade to Fahrenheit
void main()
{
    float Ct,Fh;
    printf("Enter the Temperature in Centigrade:\n");
    scanf("%f",&Ct);
    Fh=(Ct*1.8)+32.0;
    printf("The Temperature in Fahrenheit:%f",Fh);

}
