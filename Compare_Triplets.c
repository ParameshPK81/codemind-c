#include<stdio.h>
int main()
{
    int a[3],b[3],i,ares=0,bres=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            ares++;
        }
        if(b[i]>a[i])
        {
            bres++;
        }
    }
    printf("%d %d",ares,bres);
}