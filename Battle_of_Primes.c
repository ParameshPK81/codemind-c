#include<stdio.h>
int fun(int n)
{
    int i,fc=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,sum=0,i,np;
    scanf("%d%d",&a,&b);
    sum=a+b;
    for(i=sum+1;;i++)
    {
        if(fun(i))
        {
            break;
        }
    }
    printf("%d",i-sum);
}