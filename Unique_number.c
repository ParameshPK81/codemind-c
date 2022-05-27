#include<stdio.h>
int main()
{
    int n,a[100]={0},d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(a[d]==1)
        {
            break;
        }
        else
        {
            a[d]=1;
        }
        n=n/10;
    }
    if(n)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}