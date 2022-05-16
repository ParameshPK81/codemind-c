#include<stdio.h>
int pic(int a,int b,int c)
{
    if(b<a||c<a)
    {
        return 1;
    }
    else
    {
        if(b==c)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}
int main()
{
    int a,b,res;
    scanf("%d",&b);
    scanf("%d",&a);
    int arr[a][2],i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        res=pic(b,arr[i][0],arr[i][1]);
        if(res==1)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(res==2)
        {
            printf("ACCEPTED
");
        }
        else if(res==3)
        {
            printf("CROP IT
");
        }
    }
}