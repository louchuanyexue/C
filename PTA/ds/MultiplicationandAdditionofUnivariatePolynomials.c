#include<stdio.h>
int main()
{
    int count,count2;
    scanf("%d",&count);
    int num[count*2];
    for(int i=0;i<count*2;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&count2);
    int num2[count2*2];
    for(int j=0;j<count2*2;j++)
    {
        scanf("%d",&num2[j]);
    }
    for(int i=1;i<count2*2;i++)
    {
        for(int j=1;j<count*2;j++)
        {
            if((i%2 != 0)&&(j%2 != 0))
            {
                printf("%d ",num2[i]*num[j]);
            }
            if((i%2 == 0)&&(j%2 == 0))
            {
                printf("%d ",num2[i]+num[j]);
            }
        }
    }
}