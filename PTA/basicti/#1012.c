#include<stdio.h>
int main()
{
    int n=0,a1=0,a2=0,a3=0,a5=0,n3=0,flag=1;
    double a4=0,sum=0;
    scanf("%d",&n);
    int num[1010]={0};
    for(int i=1;i<=n;i++)
        scanf("%d",&num[i]);
    for(int i=1;i<=n;i++){
        if((num[i]%5 == 0)&&(num[i]%2)==0)a1+=num[i];
        else if(num[i]%5 ==1){
            if(flag==1){
                a2+=num[i];
                flag=0;
            }
            else{
                a2-=num[i];
                flag=1;
            }
        }
        else if(num[i]%5 == 2)a3++;
        else if(num[i]%5 == 3){
            sum+=num[i];
            n3++;
        }
        else if(num[i]%5 == 4){
            if(num[i]>a5)a5=num[i];
        }
    }
    if(n3!=0)a4=sum/n3;
    if(a1!=0)printf("%d ",a1);
    else printf("N ");
    if(a2!=0)printf("%d ",a2);
    else printf("N ");
    if(a3!=0)printf("%d ",a3);
    else printf("N ");
    if(a4!=0)printf("%.1f ",a4);
    else printf("N ");
    if(a5!=0)printf("%d",a5);
    else printf("N");
    return 0;
}