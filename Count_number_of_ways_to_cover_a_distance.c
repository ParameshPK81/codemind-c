#include<stdio.h>
int prc(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return prc(n-1)+prc(n-2)+prc(n-3);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",prc(n));
}