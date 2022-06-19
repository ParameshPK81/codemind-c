#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    double avg,sum=0;
    int count=0,c=0;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]!=0)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=0;
                }
            }
        }
        if(c==arr[i])
        {
            sum+=arr[i];
            count++;
        }
    }
    if(count==0)
    {
        printf("%d",-1);
    }
    else
    {
        avg=sum/(count*1.0);
        printf("%.2lf",avg);
    }
    
}