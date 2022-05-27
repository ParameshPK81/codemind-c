#include<stdio.h>
int main()
{
    int n,a[100],i,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            x++;
        }
        if(a[i]%2==0 && i%2==0)
        {
            y++;
        }
    }
    if(x==y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}