	#include<stdio.h>
int isprime(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else
    {
    return 1;
    }
}
int main()
{
    int n,i,j,p1,p2,c=0;
    scanf("%d",&n);
    for(i=2;i<=1000;i++)
    {
      for(j=2;j<=1000;j++)
            {
                if(i!=j && i*j<=n)
                {
                    if(isprime(i)==1 && isprime(j)==1)
                    {
                        if(i*j==n)
                        {
                            p1=i;
                            p2=j;
                            c=1;
                            break;
                            
                        }
                        
                    }
                    
                }
            }
    }
    if(c==1)
    {
        printf("%d %d",p2,p1);
    }
    else
    {
        printf("%d",-1);
    }
}