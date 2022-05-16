#include<stdio.h>
int main()
{
    int a,r=0,b,rev=0,c,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        r=r*10+b;
    }
    while(r!=0)
    {
        c=r%10;
        r=r/10;
        if(d<1)
        {
            if(c==6)
            {
                c=9;
                d=1;
            }
        }
        rev=rev*10+c;
    }
    printf("%d",rev);
}