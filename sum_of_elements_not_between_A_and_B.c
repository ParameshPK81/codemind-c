#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]<=y)
        {
            continue;
        }
        sum+=a[i];
    }
    printf("%d",sum);
}