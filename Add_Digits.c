#include<stdio.h>
int ad(int n)
{
    int d,s=0,p=0;
    while(n>0)
    {
        while(n)
        {
        d=n%10;
        s+=d;
        n/=10;
        }
        if(s<10)
        {
            return s;
        }
        else
        {
                n=s;
                s=0;
                
        }
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ad(n));
}