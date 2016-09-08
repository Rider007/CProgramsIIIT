#include <stdio.h>
//to find the day of the date entered
void main()
{
    int d,m,y;
    printf("Enter the date:\n");
    scanf("%d%d%d",&d,&m,&y);
    printf("The date is %d/%d/%d\n",d,m,y);
    int dayr=0,td;
    switch(m)
    {
        case 1:td=0;
               dayr=d%7-1;
               break;
        case 2:td=0+31;
               dayr=(td+d)%7-1;
               break;
        case 3:td=0+31+28;
               dayr=(td+d)%7-1;
               break;
        case 4:td=0+31+28+31;
               dayr=(td+d)%7-1;
               break;
        case 5:td=0+31+28+31+30;
               dayr=(td+d)%7-1;
               break;
        case 6:td=0+31+28+31+30+31;
               dayr=(td+d)%7-1;
               break;
        case 7:td=0+31+28+31+30+31+30;
               dayr=(td+d)%7-1;
               break;
        case 8:td=0+31+28+31+30+31+30+31;
               dayr=(td+d)%7-1;
               break;
        case 9:td=0+31+28+31+30+31+30+31+31;
               dayr=(td+d)%7-1;
               break;
        case 10:td=0+31+28+31+30+31+30+31+31+30;
               dayr=(td+d)%7-1;
               break;
        case 11:td=0+31+28+31+30+31+30+31+31+30+31;
               dayr=(td+d)%7-1;
               break;
        case 12:td=0+31+28+31+30+31+30+31+31+30+31+30;
               dayr=(td+d)%7-1;
               break;
        default: printf("Wrong Entry");
                break;
    }
    if(dayr==-1)
        dayr=dayr+7;
    switch(dayr)
    {

        case 0:printf("The Day: Monday");
                break;
        case 1:printf("The Day: Tuesday");
                break;
        case 2:printf("The Day: Wednesday");
                break;
        case 3:printf("The Day: Thursday");
                break;
        case 4:printf("The Day: Friday");
                break;
        case 5:printf("The Day: Saturday");
                break;
        case 6:printf("The Day: Sunday");
                break;
        default:printf("Wrong Entry");
                break;
    }
}
