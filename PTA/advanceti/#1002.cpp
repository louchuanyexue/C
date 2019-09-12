#include<cstdio>
int main()
{
    double p1[1010]={0};
    // float p2[11]={0.0};
    // float p3[11]={0.0};
    int k,i,n=0;
    double temp;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&i);
        scanf("%lf",&p1[i]);
    }
    scanf("%d",&k);
    while(k--){
        scanf("%d",&i);
        scanf("%lf",&temp);
        p1[i]+=temp;
    }
    for(int i=0;i<1010;i++){
        if(p1[i]!=0)n++;

    }
    printf("%d",n);
    k=11;
    for(int k=1009;k>=0;k--){
        if(p1[k]!=0){
            printf(" %d %.1f",k,p1[k]);
        }
    }
    return 0;
}
