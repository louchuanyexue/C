#include<stdio.h>
void f(int err_sum,int* a,int k,int sum,int* b)
{
    if(sum>err_sum)return;
    if(err_sum==sum){
        for(int i=0;i<5;i++){
            if(!(b[i]))printf("%d ",i);
        }
        printf("\n");
        return;
    }
    if(k>=5)return;
    f(err_sum,a,k+1,sum,b);
    sum+=a[k];
    b[k]=1;
    f(err_sum,a,k+1,sum,b);
    b[k]=0;
}
int main()
{
    int a[]={3,2,4,3,1};
    int sum=0;
    int b[5]={0};
    f(6,a,0,sum,b);
    return 0;
}