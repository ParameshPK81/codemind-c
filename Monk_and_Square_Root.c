#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        long long int i,f=0;
        for(i=0;i<b;i++)
        {
            if(i*i%b==a)
            {
                printf("%lld
",i);
                f=1;
                break;
            }
            
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}