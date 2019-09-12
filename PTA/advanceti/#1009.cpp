#include<cstdio>
int main()
{
    double p1[1010]={0};
    double p2[2010]={0};
    // float p2[11]={0.0};
    // float p3[11]={0.0};
    int k,i,n=0,u=0;
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
        for(int j=1009;j>=0;j--){
            u=j+i;
            p2[u]=p1[j]*temp+p2[u];
        }
    }
    for(int i=0;i<2010;i++){
        if(p2[i]!=0)n++;

    }
    printf("%d",n);
    k=11;
    for(int k=2009;k>=0;k--){
        if(p2[k]!=0){
            printf(" %d %.1f",k,p2[k]);
        }
    }
    return 0;
}
