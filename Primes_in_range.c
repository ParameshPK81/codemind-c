#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,x=0,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i==1)
        {
            continue;
        }
        x=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                x+=1;
                break;
            }
        }
        if(x==0)
        {
            c+=1;
        }
    }
    
    printf("%d",c);
}