#include <stdio.h>
//To print the Integral part and Fractional part of a real number
void main()
{
    printf("Enter the real number:\n");
    float num,frac;
    int int_num;
    scanf("%f",&num);
    int_num=num;
    frac=num-int_num;
    printf("Fractional part:%f\n",frac);
    printf("Integral Part:%d",int_num);


}
