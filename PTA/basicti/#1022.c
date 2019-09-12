#include<stdio.h>
int main(){
    int a,b,c,d,i;
    int num[35];
    i=0;
    scanf("%d %d %d",&a,&b,&d);
    c = a+b;
    do{
        i++;
        num[i]=c%d;
        c=c/d;
    }while(c!=0);
    while(i>0)printf("%d",num[i--]);
    return 0;
}