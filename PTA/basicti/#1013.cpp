#include<stdio.h> 
int main()
{
	int num[10010]={0};
	int m,n,cnt=0,rev=0;
	for(int i=2;i<=10000;i++){
		if(num[i]==1)continue;
		for(int j=2;j<=10000/i;j++){
			num[j*i]=1;
		}
	}
	scanf("%d %d",&m,&n); 
	for(int k=2;k<10000;k++){
		if(num[k]==0){
			cnt++;
			if(m == n && cnt>=n){
			  printf("%d",k);
			  break;
			}
			if(cnt>=m && rev<10 && cnt<=n-1){
				printf("%d ",k);
				rev++;
			}
			if(cnt>=m && rev==10 && cnt<=n-1){
				printf("%d\n",k);
				rev=0;
			}
			if(rev<=10 && cnt==n){
				printf("%d",k);
			}
			
		}
		if(cnt==n)break;
	}
}
