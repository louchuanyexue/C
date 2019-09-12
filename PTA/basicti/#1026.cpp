#include<cstdio>
int main(){
    int a,b,h,m,s,tim;
    scanf("%d %d",&a,&b);
    tim = int((b-a)/100.0+0.5);
    h=tim/3600;
    m=(tim%3600)/60;
    s=(tim%3600)%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}