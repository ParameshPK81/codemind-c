#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,p1,p2;
    scanf("%d",&n);
    int arr[n],i,j,diff1,diff2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i];j<=10000;j++)
        {
            if(prime(j)==1)
            {
                diff1=j-arr[i];
                p1=j;
                break;
            }
        }
         for(j=arr[i];j>0;j--)
        {
            if(prime(j)==1)
            {
                diff2=arr[i]-j;
                p2=j;
                break;
            }
        }
        if(diff1>diff2)
        {
            printf("%d
",p2);
        }
        else if(diff1<diff2)
        {
            printf("%d
",p1);
        }
        else
        {
            if(p1>p2)
            {
                printf("%d
",p2);
            }
            else
            {
                printf("%d
",p1);
            }
        }
        
    }
}