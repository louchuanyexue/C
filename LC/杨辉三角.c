#include<stdio.h>
int f(int m ,int n){
    if(n==0||n==m){
        return 1;
    }
    else
        return f(m-1,n-1)+f(m-1,n);
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",f(m,n));
    return 0;
}