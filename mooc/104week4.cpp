#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	do{
		scanf("%d",&a);
		if (a%2!=0)
		{
		b++;
		}
		else{
		c++;	
		}
	}while(a!=-1);
	printf("%d %d",b-1,c);
	return 0;
 } 
