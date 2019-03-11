#include<stdio.h>
int main()
{
    int n,ac=0,length=0,t;
    int num[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        length++;
        scanf("%d",&num[i]);
    }
    if(length==1)return printf("%d",num[0]);
    for(int i=0;i<length;i++)
    {
        int temp=1;
        if(num[i]!=0)temp=num[i];
        while(temp!=1)
        {
            if(temp%2)
                temp=temp*3+1;
            else
                temp=temp/2;
            for(int j=0;j<length;j++)
            {
                if(num[j]==temp)
                    num[j]=0;
            }
                       
        }
    }
    for(int i=1;i<length;i++)
        for(int j=0;j<length-i;j++)
        {
            if(num[j]<num[j+1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    for(int i=0;i<length-1;i++)
    {
        if(num[i])printf("%d",num[i]);
        if(num[i+1]!=0)putchar(' ');
    }   
    return 0;
}