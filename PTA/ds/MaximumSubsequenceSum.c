#include<stdio.h>
int MaxsubSum(int num[],int count);
int main()
{
    int count;
    int num[100000];
    scanf("%d",&count);
    for(int i=0;i<count;i++)scanf("%d",&num[i]);
    MaxsubSum(num,count);
}
/*int MaxsubSum(int num[],int count)//brute force
{
    int maxsum=0,thissum=0;
    for(int i=0;i<count;i++)
    {
        for(int j=i;j<count;j++)
        {
            thissum=0;
            for(int k=i;k<=j;k++)
                thissum+=num[k];
            if(thissum>maxsum)maxsum=thissum;
        }
    }
    return maxsum;
}*/
/*int MaxsubSum(int num[],int count)
{
    int maxsum=0,thissum=0;
    for(int i=0;i<count;i++)
    {
        thissum=0;
        for(int j=i;j<count;j++)
        {
            thissum+=num[j];
            if(thissum>maxsum)maxsum=thissum;
        }
    }
    return maxsum;
}*/
int MaxsubSum(int num[],int count)//online slove
{
    int maxsum=0,thissum=0,flag=0,flag2=0;
    int front=0,rear=0,rev=0;
    for(int i=0;i<count;i++)
    {
        if(num[i]==0)flag2=1;
        thissum += num[i];
        rev++;
        if(thissum>maxsum)
        {
            maxsum=thissum;
            rear=num[i];
            front=num[i-rev+1];
        }
        else if(thissum<0)
        {
            thissum=0;
            rev=0;
        }
    }
    if(maxsum==0&&flag2==1)
        {
            for(int j=0;j<count;j++)
            {
                if(num[j]==0&&flag==0)
                {
                    front =num[j];
                    rear  =num[j];
                    flag =1;
                }
                if(num[j]==0&&flag==1)
                {
                    rear=num[j];
                }
                if(num[j]<0)flag=0;
            }
        }
    if(maxsum==0&&flag2==0)
    {
        front=num[0];
        rear=num[count-1];
    }   
    printf("%d %d %d",maxsum,front,rear);
}