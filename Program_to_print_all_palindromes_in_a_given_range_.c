#include<stdio.h>
int pal(int n)
{
    int d,r=0,t;
    t=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if (r==t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}