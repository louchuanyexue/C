#include<cstdio>
#include<cmath>
int main(){
    int n,x,a;
    char c;
    scanf("%d %c",&n,&c);
    x=int(sqrt(2.0*(n+1))-1);
    if(x%2==0)x--;
    a = n - (pow((1+x),2.0)/2-1);
    //printf("%d",a);
    for(int i=x;i>0;i=i-2){
        for(int k=0;k<(x-i)/2;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(int i=3;i<=x;i=i+2){
        for(int k=0;k<(x-i)/2;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",c);
        }
        if(i!=x)printf("\n");
        else
        {
            printf("\n%d",a);
        }
        
    }
    if(n<7)printf("%d",n-1);
    return 0;
}