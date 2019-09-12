#include<stdio.h>
int main()
{
    int n,t;
    int flag=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)scanf("%d",&num[i]);
    if(n==1)printf("%d",num[0]);
    else{
    for(int i=0;i<n;i++)
    {
        int temp=1;
        if(num[i]!=0)temp=num[i];
        while(temp!=1)
        {
            if(temp%2)
                temp=(temp*3+1)/2;
            else
                temp=temp/2;
            for(int j=0;j<n;j++)
            {
                if(num[j]==temp)
                    {num[j]=0;
                    break;}
            }
                       
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]<num[j+1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    for(int i=0;i<n-1;i++)
    {
        if(num[i]<=100&&num[i]>1){
            if(flag)putchar(' ');
            printf("%d",num[i]);
            flag=1;
    }   }
    }
    return 0;
}