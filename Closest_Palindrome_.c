#include<stdio.h>
int palindrome(int n)
{
    int d,r=0,c=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==c)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    int n,i,j,diff1,diff2,pal1,pal2;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--)
    {
        if(palindrome(i)==1)
        {
            diff1=n-i;
            pal1=i;
            break;
        }
    }
    for(j=n+1;j<=10000;j++)
    {
        if(palindrome(j)==1)
        {
            diff2=j-n;
            pal2=j;
            break;
        }
    }
    if(diff1==diff2)
    {
        printf("%d %d",pal1,pal2);
    }
    else if(diff1<diff2)
    {
        printf("%d",pal1);
    }
    else if(diff1>diff2)
    {
        printf("%d",pal2);
    }
    else
    {
        if(pal1>pal2)
        {
            printf("%d",pal2);
        }
        else
        {
            printf("%d",pal1);
        }
    }
}