#include<cstdio>
int main()
{
    long long g1=0,g2=0,s1=0,s2=0,k1=0,k2=0,n1=0,n2=0,temp=0;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&g1,&s1,&k1,&g2,&s2,&k2);
    n1 = g1*17*29+s1*29+k1;
    n2 = g2*17*29+s2*29+k2;
    temp = n1 + n2;
    printf("%lld.%lld.%lld",temp/17/29,temp/29%17,temp%29);
    return 0;
}