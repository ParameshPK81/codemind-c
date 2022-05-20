#include<stdio.h>
int main()
{
    int n,d,r=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    if(r==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}