#include<stdio.h>
int nod(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(nod(i)==9)
        {
            printf("%d ",i);
            c++;
        }
    }
    printf("
Total=%d",c);
}