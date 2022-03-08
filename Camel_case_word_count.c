#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=1;i<strlen(s)-1;i++)
    {
        if(s[i]>64&&s[i]<91)
        {
            c++;
        }
    }
    printf("%d",c+1);
}