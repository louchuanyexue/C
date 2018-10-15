#include <stdio.h>

int main()
{
	int a,b,c;
	a=0;
	b=0;
	c=0;
	scanf("%d",&a);
	c=a%100;
	if (c != 0)
	{
		if (a>800)
		{
			b=a-800;
		}
		else
		{
			b=(24-(8-(a/100)))*100+(a%100);
		}
	}
	if(c==0) 
	{
		if (a>800)
		{
			b=a-800;
		}
		else
		{
			b=(24-(8-(a/100)))*100;
		}
	}
	printf("%d\n",b);
	return 0;
}
