#include <stdio.h>

int main()
{	int a,b;
 	a=0;
 	b=0;
	scanf("%d",&a);
	b=a/100+a%100/10*10+a%100%10*100;
	printf("%d",b);
	return 0;
 } 
