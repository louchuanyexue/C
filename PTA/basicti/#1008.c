#include<stdio.h>
void swap(int * u,int *v){
    int temp = *u;
    *u = *v;
    *v = temp;
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
    for(int j=0;j<m;j++){
        int tr = num[n-1];
        for(int h=n-1;h>=0;h--){
            num[h]=num[h-1];
        }
        num[0] = tr;
    }
    for(int k=0;k<n-1;k++){
        printf("%d ",num[k]);
    }
    printf("%d",num[n-1]);
    return 0;
}