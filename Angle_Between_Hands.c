#include<stdio.h>
int main()
{
    char str[10];
    scanf("%s",str);
    int i,hour=0,min=0;
    float angle;
    hour=(str[0]-48)*10+(str[1]-48);
    min=(str[3]-48)*10+(str[4]-48);
    if(min%2==0)
    {
        angle=30*(hour*1.0)-((11*min*1.0)/2);
        if(angle<0)
        {
            angle+=360;
        }
        if(angle>180)
        {
            angle=360-angle;
        }
        printf("%.1f",angle);
    }
    else
    {
        angle=30*(hour*1.0)-(5.5*min*1.0);
        if(angle<0)
        {
            angle+=360;
        }
        if(angle>180)
        {
            angle=360-angle;
        }
        printf("%.1f",angle);
    }
    return 0;
}