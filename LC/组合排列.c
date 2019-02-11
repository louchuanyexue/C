#include<stdio.h>
int f(int a,int b){
    if(a==0||b==0)
        return 1;
    return f(a-1,b) + f(a,b-1);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}