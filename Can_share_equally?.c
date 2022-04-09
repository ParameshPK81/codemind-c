#include<stdio.h>
int main()
{
    int x,y,res=0;
    scanf("%d%d",&x,&y);
    res=x+2*y;
    if(x==0&&y%2==0)
    {
        printf("YES");
    }
    else if(x==0&&y%2!=0)
    {
        printf("NO");
    }
    else if(res%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}