#include<stdio.h>
int main()
{
    int n,d,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        d=sq%10;
        sum=sum+d;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
         printf("Not Neon Number");
    }
}