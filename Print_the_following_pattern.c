#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if( i==j || j==(n-i+1) ){
                printf("%d ",k);
            }
            else{
            printf(" ");
            }
        }
        k-=1;
        printf("
");
    }
}