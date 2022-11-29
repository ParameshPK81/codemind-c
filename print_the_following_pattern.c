#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    c=n*2-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if( i==j || j==(n-i+1)){
                printf("x");
            }
            else{
                printf("0");
            }
        }
        printf("
");
    }
}