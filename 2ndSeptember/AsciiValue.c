#include <stdio.h>
//To print the ASCII value of a alphabet
void main()
{
    printf("Enter the alphabet:\n");
    char alp;
    scanf("%c",&alp);
    int val=(int)alp;
    printf("The ASCII value of %c is: %d",alp,val);
}
