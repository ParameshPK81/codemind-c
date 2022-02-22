#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    sum=sum+(num*(num+1))/2;
    printf("%d",sum);
}