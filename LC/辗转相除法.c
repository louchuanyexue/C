#include<stdio.h>
int f(int a,int b){
    int c;
    if(!(a%b)){
        return b;
    }
    else
    {
        f(b,a%b);
    }
    
}
/*pro:
    int gcd(int x int y){
        return y ? gcd(y,x%y) : x}*/
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}