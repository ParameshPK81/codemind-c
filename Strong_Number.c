#include<stdio.h>
int fact(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
int main()
{
   int n,sum=0,d,k,z;
   scanf("%d",&n);
   k=n;
   while(n>0)
   {
       d=n%10;
       z=fact(d);
       sum=sum+z;
       n/=10;
   }
    if(sum==k)
    {
        printf("The number %d is a strong number",k);
    }
    else
    {
         printf("The number %d is not a strong number",k);
    }
    sum=0;
}