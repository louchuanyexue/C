#include<stdio.h>
int main()
{
    int n,b,s,g,t=1;
    char B='B',S='S';
    scanf("%d",&n);
    b=n/100;
    s=(n%100)/10;
    g=n%10;
    while(b--){
        printf("%c",B);
    }
    while(s--){
        printf("%c",S);
    }
    for(int i=1;i<=g;i++){
        printf("%d",i);
    }
    return 0;
}