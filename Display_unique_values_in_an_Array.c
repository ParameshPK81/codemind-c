#include<stdio.h>
int  count(int *arr,int n,int k){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            c+=1;
        }
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(count(arr,n,arr[i])==1){
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
}