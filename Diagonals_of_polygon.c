#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=3)
    {
        n=(n*(n-3))/2;
        printf("%d",n);
    }
}