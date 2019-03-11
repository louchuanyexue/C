#include<stdio.h>
int gcd(int a,int b)
{
    return a?gcd(b%a,a) : b;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a*b/gcd(a,b);
    printf("%d",c);
    return 0;
}