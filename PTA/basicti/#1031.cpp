#include<cstdio>
int main(){
    int n,a,k=0,ans,q=0;
    char id[20];
    int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
        scanf("%s",id);
        k=0;
        for(int j=0;j<17;j++){
            a = id[j] - 48;
            k = a * w[j] + k;
        }
        ans = k % 11;
        if(m[ans] == id[17] )q++;
        else{
            printf("%s\n",id);
        }
    }
    if(q == n)printf("All passed");
    return 0;
}