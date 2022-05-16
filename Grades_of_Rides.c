#include<stdio.h>
int main()
{
    int h,s,v;
    scanf("%d%d%d",&h,&s,&v);
    if(h>50 && s>60 && v>100)
    {
        printf("%d",10);
    }
    else if(h>50 && s>60)
    {
        printf("%d",9);
    }
    else if(s>60 && v>100)
    {
        printf("%d",8);
    }
     else if(h>50 && v>100)
    {
        printf("%d",7);
    }
     else if(h>50||s>60||v>100)
    {
        printf("%d",6);
    }
    else
    {
        printf("%d",5);
    }
    
}