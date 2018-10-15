#include<stdio.h>
int main(){
	int m=0,n=0,a,b=1,c=1,d=0,i;
	scanf("%d %d",&n,&m);
	for (i=3;i>0;i++){
		for(a=2;a<i;a++){
			if(i%a==0)
			{b=0;
			break;
			}
		}
		if(b==1){
			c+=1;
			if(c>=n&&c<=m){
				d+=i;
		}}
		if(n==1)
		{d+=2;
		}
		if(c>m){
			break;
		}
		b=1;
	}
	printf("%d",d);
	return 0;
} 
