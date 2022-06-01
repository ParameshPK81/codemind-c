#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling"); 
    }
    if(n%5==0)
    {
        printf("Plang");
    }
    if(n%7==0)
    {
        printf("Plong");
    }
    else if(n%3!=0 and n%5!=0 and n%7!=0)
    {
        printf("%d",n);
    }
}