#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s[1000000] = {0};
    for(int i=2;i<1000000/2;i++){
        if(s[i]==1)continue;
        for(int k=2;k<=1000000/i;k++){
            if((i*k)<1000000)s[k*i]=1;
        }
    }
    int m=0;
    for(int j=2;j<1000000;j++){
        if(s[j]==0)m++;
        if(m==n){
            printf("%d",j);
            break;
        }

    }
    return 0;
}