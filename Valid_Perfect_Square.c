#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,count=0,c=0;
    int flag=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        flag=0;
        for(j=1;j<arr[i];j++)
        {
            if(j*j==arr[i])
            {
                flag=1;
                break;
            }
        }
         if(flag==1)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
   
}