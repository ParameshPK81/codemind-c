#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k=1;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=n; j>=i; j--)
        {
            printf("%d ",j);
        }
        for(j=((i-1)*2)-1; j>=1; j--)
        {
            printf("%d ",i);
        }
        for(j=i; j<=n; j++)
        {
            if(j==1)
            {
                continue;
            }
            printf("%d ",j);
        }
        printf("
");
    }
    k=1;
    for(i=2; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf("%d ",j);
        }
        for(j=1; j<=k; j++)
        {
            printf("%d ",i);
        }
        for(j=i; j<=n; j++)
        {
            printf("%d ",j);
        }
        printf("
");
        k+=2;
    }
    return 0;
}