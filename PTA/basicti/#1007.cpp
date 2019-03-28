#include<stdio.h>
int main()
{
	int num[100000]={0};
	int n,cnt=0;
	for(int i=2;i<100000/2;i++)
	{
		if(num[i]==1)continue;
		for(int j=2;j<=100000/i;j++)
		{
			num[i*j]=1;
		}
	}
	scanf("%d",&n);
	for(int k=2;k<=n-2;k++)
	{
		if(num[k+2]==0 && num[k]==0)cnt++;
	}
	printf("%d ",cnt);
}
