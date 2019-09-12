#include<cstdio>
int main(){
    int n,k,flag=1,a=0;
    char s[20]={};
    scanf("%d %d",&n,&k);
    for(int i = 0;i<20;i++){
        s[i]=n%k+48;
        n=n/k;
        a++;
        if(n==0 && flag==0)break;
        flag=0;
    }
    flag=1;
    for(int i=0;i<=a/2;i++){
        if(s[i]!=s[a-i-1])flag=0;
    }
    if(flag==1)printf("Yes\n");
    else printf("No\n");
    for(int i=a-1;i>0;i--){
        printf("%c ",s[i]);
    }
    printf("%c",s[0]);
    return 0;
}