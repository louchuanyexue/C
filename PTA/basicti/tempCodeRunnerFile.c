#include<stdio.h>
int main(){
    int n,i,j,k;
    char c;
    scanf("%d %c",&n,&c);
    j=n;
    k=n/2;
    if(n==1)printf("%c",c);
    while(k>0){
        i = j;
        if(k==n/2||k==1)while(i>0){
            if(i==1)printf("%c\n",c);
            else printf("%c",c);
            i--;
            }
        else while(i>0){
            if(i==1)printf("%c\n",c);
            else if(i==j)printf("%c",c);
            else printf(" ");
            i--;
        }
        k--;
    }
    return 0;
}