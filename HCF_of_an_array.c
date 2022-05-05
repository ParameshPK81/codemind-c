#include<stdio.h>
int main()
{
    int n,arr[100],i,j=1,hcf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    hcf=arr[0];
    while(j<n)
    {
        if(arr[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=arr[j]%hcf;
            i++;
        }
    }
    printf("%d",hcf);
    
}