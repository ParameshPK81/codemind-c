#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   int rev=0,b,i,sq,sum=0,temp=n;
   while(temp>0)
   {
       b=temp%10;
       rev=(rev*10)+b;
       temp/=10;
   }
   for(i=1;rev>0;i++)
   {
       b=rev%10;
       sq=pow(b,i);
       sum+=sq;
       rev=rev/10;
   }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}