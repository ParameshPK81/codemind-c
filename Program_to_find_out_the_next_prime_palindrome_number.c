#include<stdio.h>
int isitpal(int num)
{
    int d,res=0,temp;
    temp=num;
    while(num)
    {
        d=num%10;
        res=res*10+d;
        num=num/10;
    }
    if(temp==res )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isprime(int num)
{
    int i,fc=0;
    for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
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
    int n,np;
    scanf("%d",&n);
    for(np=n+1;;np++)
    {
        if(isitpal(np)&&isprime(np))
        {
            break;
        }
    }
    printf("%d",np);
}