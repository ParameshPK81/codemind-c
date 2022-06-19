#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}