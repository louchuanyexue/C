#include<stdio.h>
int main()
{
    for(int a=20;a>=1;a--){
    for(int b=a-1;b>=1;b--){
    for(int c=b-1;c>=1;c--){
    for(int d=c-1;d>=1;d--){
        if(b*c*d+a*b*c+a*c*d+a*b*d==a*b*c*d)
        printf("%d %d %d %d\n",a,b,c,d);
    }
    }
    }
    }
    return 0;
}