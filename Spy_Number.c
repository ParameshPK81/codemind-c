#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,product=1,d;
    scanf("%d",&n);
    while(n>0)
    {
    d=n%10;
    sum=sum+d;
    product=product*d;
    n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    if(sum!=product)
    {
        printf("Not Spy Number");
    }
    
}