#include<cstdio>
int main(){
    long long a,b,c;
    int t,n=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&c);
        n++;
        long long sum = a+b;
        if(a>0&&b>0&&sum<0)printf("Case #%d: true\n",n);
        else if(a<0&&b<0&&sum>=0)printf("Case #%d: false\n",n);
        else if(sum>c)printf("Case #%d: true\n",n);
        else printf("Case #%d: false\n",n);
    }
    return 0;
}