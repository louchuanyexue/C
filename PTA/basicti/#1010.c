#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int num[n+1];
    num[n] = m;
    int a,b;
    int last;
    while(getchar() != '\n'){
        scanf("%d %d",&a,&b);
        num[b] = a;
        last = b;
    }
    for(int i = n;i>=0;i--){
        if(i!=0 && num[i]!=0){
            if(i==last)
                printf("%d %d",num[i]*i,i-1);
            else
                printf("%d %d ",num[i]*i,i-1);
        }
        if(i == 0 && num[i]!=0)
        printf("0 0");
    }
    return 0;
}
