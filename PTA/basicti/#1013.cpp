#include<stdio.h> 
int main()
{
	int num[110010]={0};
	int m,n,cnt=0,rev=1,flag=0;
	for(int i=2;i<=110000;i++){
		if(num[i]==1)continue;
		for(int j=2;j<=110000/i;j++){
			num[j*i]=1;
		}
	}
	scanf("%d %d",&m,&n); 
	for(int i=2;i<=110000;i++){
		if(num[i]==0)cnt++;
		if(cnt>=m&&cnt<=n&&num[i]==0){
			if(rev%10==1){
				printf("%d",i);
				rev++;
			}
			else if(rev%10==0){
				printf(" %d\n",i);
				rev++;
			}
			else{
				printf(" %d",i);
				rev++;
			}
		if(cnt==n)break;
	}}
	return 0;
}
