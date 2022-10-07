#include<stdio.h>
int main()
{
    int mat[12][12];
    int i,j,r,k,s=0,l=0;
    scanf("%d %d",&r,&k);
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<k;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
            s+=mat[j][i];
        }
        if(s>=l)
        {
            l=s;
        }
    }
    printf("%d",l);
}