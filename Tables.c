#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d%d",&n,&r);
    for(i=0;i<=r;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}