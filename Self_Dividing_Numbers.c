#include<stdio.h>
int sd(int n)
{
    int flag=0;
    int temp=n,r;
    while(temp>0)
    {
        r=temp%10;
        if(r==0)
        {
            flag=0;
            break;
            
        }
        else
        {
            if(n%r==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        temp=temp/10;
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(sd(i))
        {
          printf("%d ",i)  ;
        }
    }
}