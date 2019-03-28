#include<stdio.h>
int MaxsubSum(int num[],int count);
int main()
{
    int count;
    int num[100000];
    scanf("%d",&count);
    for(int i=0;i<count;i++)scanf("%d",&num[i]);
    printf("%d",MaxsubSum(num,count));
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
    int maxsum=0,thissum=0;
    for(int i=0;i<count;i++)
    {
        thissum += num[i];
        if(thissum>maxsum)maxsum=thissum;
        else if(thissum<0)
        {
            thissum=0;
        }
    }
    return maxsum;
}