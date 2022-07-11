#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,sum=0,t;
    if (a>=1 && a<=100000)
    {
        int arr[a];
        for (i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&t);
        for (i=0; i<a; i++)
        {
            if (arr[i]>t)
            {
                sum+=2;
            }
            else
            {
                sum+=1;
            }
        }
        printf("%d",sum);
        return 0;
    }
}