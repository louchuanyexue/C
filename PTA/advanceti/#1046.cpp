#include<cstdio>
int main(){
    int n,j,k,d1,d2,ans1,ans2,min,sum=0;
    scanf("%d",&n);
    int num[n]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(i>0)num[i]=k+num[i-1];
        else num[i]=k;
        sum+=k;
    }

    scanf("%d",&j);
    while(j--){
        ans1=0;
        ans2=0;
        scanf("%d %d",&d1,&d2);
        if(d1<d2){
            if(d1 ==1)ans1 = num[d2-2];
            else ans1 = num[d2-2]-num[d1-2];
            ans2 = sum - ans1;
        }
        else if(d1>d2){
            if(d2 ==1)ans1 = num[d1-2];
            else ans1 = num[d1-2]-num[d2-2];
            ans2 = sum - ans1;
        }
        if (ans1<=ans2)min=ans1;
        else min=ans2;
        printf("%d\n",min);
    }
    return 0;
}