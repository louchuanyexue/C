#include <stdio.h>
#include <math.h>
int main()
{
	int a=0,b=0,c=0,f=0;
	double d=0,e=0;
	scanf("%d",&a);
	while(a%10!=0)
	{
		c++;
		b=a%10;
		if (b%2==c%2){
			e+=pow(2.0,d);
		}
		d++;
		a/=10;
	}
	f=e;
	printf("%d\n",f);
	return 0;
}
