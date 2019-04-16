#include<stdio.h>
void reverse(int * u,int i,int j){
    for(;i<j;i++,j--){
        int temp = *(u+i);
        *(u+i) = *(u+j);
        *(u+j) = temp;
    
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int num[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    reverse(num,n-m,n-1);
    reverse(num,0,n-m-1);
    reverse(num,0,n-1);
    for(int k=0;k<n-1;k++){
        printf("%d ",num[k]);
    }
    printf("%d",num[n-1]);
    return 0;
}