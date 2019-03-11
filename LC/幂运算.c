#include<stdio.h>
int main()
{
    int a,b,c=17;
    scanf("%d %d",&a,&b);
    int x=1;
    for(int i=1;i<=b;i++){
        x=(x*a)%17;
    }
    printf("%d",x);
}