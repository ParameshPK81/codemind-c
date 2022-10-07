#include<stdio.h>
int main()
{
    int v[20][20],k,r=0,j,a,b;
    scanf("%d %d",&a,&b);
    for(k=0;k<a;k++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&v[k][j]);
        }
    }
    for(k=0;k<a;k++)
    {
        for(j=0;j<b;j++)
        {
           if(k==0 || j==0 || k==a-1 || j==a-1)
           {
               r+=v[k][j];
           }
        }
    }
    printf("%d",r);
}
