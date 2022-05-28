#include<stdio.h>
int main()
{
    int a,b,c,res=0;
    scanf("%d%d%d",&a,&b,&c);
    res=2*a*b*c*512;
    res=res/1024;
    printf("%dKB",res);
}