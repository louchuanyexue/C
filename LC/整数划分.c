#include<stdio.h>
void f(int n,int *num,int rev)
{
    if(n<=0){
        for(int i=0; i<rev;i++){
            printf("%d ",num[i]);
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        if(rev>0&&num[rev-1]<i)
            continue;
        num[rev]=i;
        f(n-i,num,rev+1);

    } 
}
int main()
{
    int n;
    int a[15]={0};
    scanf("%d",&n);
    f(n,a,0);
    return 0;
}