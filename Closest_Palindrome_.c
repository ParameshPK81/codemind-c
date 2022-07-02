#include<stdio.h>
int pal(int n)
{
    int d,r=0,c;
    c=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==c)
    {
        return 1;
    }
   
        return 0;
    
}
int main()
{
    int a;
    scanf("%d",&a);
    int diff1=0,diff2=0,i,j;    
    int pal1,pal2;
    for(i=a+1;i<=10000;i++)
    {
        if(pal(i)==1)
        {
            diff1=i-a;
            pal1=i;
            break;
        }
    }
    for(i=a-1;i>0;i--)
    {
        if(pal(i)==1)
        {
            diff2=a-i;
            pal2=i;
            break;
        }
    }
    if(diff1==diff2)
    {
         printf("%d %d",pal2,pal1);
    }
    else if(diff1>diff2)
    {
        printf("%d",pal2);
    }
    else if(diff1<diff2)
    {
        printf("%d",pal1);
    }
    return 0;
}