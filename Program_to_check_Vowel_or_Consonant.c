#include<stdio.h>
int main()
{
    char vow[10]={'A','E','I','O','U','a','e','i','o','u'};
    char c;
    scanf("%c",&c);
    int i,flag=0;
    for(i=0;i<10;i++)
    {
        if(vow[i]==c)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}