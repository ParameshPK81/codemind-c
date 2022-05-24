#include<stdio.h>
int main()
{
    int n,m,s=0,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}