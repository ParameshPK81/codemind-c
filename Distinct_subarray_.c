#include<stdio.h>
int main()
{
    int l,r,i,j,sum=0,c=0;
    scanf("%d",&l);
    scanf("%d",&r);
    for(i=l;i<=r;i++)
    {
        sum=0;
        for(j=i;j<=r;j++)
        {
            sum+=j;
            if(sum%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
}