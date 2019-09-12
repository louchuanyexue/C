#include<cstdio>
int main(){
    int n,k,flag=1,a=0,temp;
    int s[800]={};
    scanf("%d %d",&n,&k);
    temp = n;
    // for(int i = 0;;i++){
    //     s[i]=n%k+48;
    //     n=n/k;
    //     a++;
    //     if(n==0 && flag==0)break;
    //     flag=0;
    // }
    do{
        s[a++]=n%k;
        n=n/k;
    }while(n!=0);
    flag=1;
    for(int i=0;i<=a/2;i++){
        if(s[i]!=s[a-i-1])flag=0;
    }
    if(flag==1)printf("Yes\n");
    else printf("No\n");
    for(int i=a-1;i>0;i--){
        if(temp!=0)printf("%d ",s[i]);
    }
    printf("%d",s[0]);
    return 0;
}