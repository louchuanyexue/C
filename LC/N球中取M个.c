#include <stdio.h>
int f(int n,int m){
    if(n<m)
        return 0;
    else if(n==m){
        return 1;
    }
    else if(m==0){
        return 1;
    }
    else
        return f(n-1,m-1)+f(n-1,m);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",f(n,m));
    return 0;
}