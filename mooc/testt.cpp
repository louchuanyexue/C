#include<stdio.h>

int main(){
	int m,n,c1,c2,c3;
	
	scanf("%d",&m);
	scanf("%d",&n);
	
	c1=n/100;
	c2=n/10%10;
	c3=n%10;
	
	printf("%d",c2);
	
	return 0;
}
