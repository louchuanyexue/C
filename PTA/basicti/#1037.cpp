#include<cstdio>
#include<cmath>
#include<cstdlib>
int main(){
    int g1,g2,s1,s2,k1,k2,p1,p2,g,s,k,n;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    p1=g1*17*29+s1*29+k1;
    p2=g2*17*29+s2*29+k2;
    n = abs(p2-p1);
    k = n%29;
    s = n/29%17;
    g = n/29/17;
    if(p1>p2) g = g*(-1);
    printf("%d.%d.%d",g,s,k);
    return 0;
}