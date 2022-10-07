#include<stdio.h>
int main()
{
    int mat[12][12];
    int i,j,r,k,s=0;
    scanf("%d %d",&r,&k);
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            s+=mat[i][j];
        }
    }
    printf("%d",s);
}