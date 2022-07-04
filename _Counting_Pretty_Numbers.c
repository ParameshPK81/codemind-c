#include<stdio.h>
int cop(int a,int b)
{
    int i,c=0;
    for(i=a;i<=b;i++)
        {
            if (i%10==2 or i%10==3 or i%10==9)
            {
                c+=1;
            }
        }
        return c;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],a,b,c,d;
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d
",cop(a,b));
    }
        
}