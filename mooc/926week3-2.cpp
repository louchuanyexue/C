#include <stdio.h>
int main()
{
	int a,b,c,d;
	a=0;
	b=0;
	c=0;
	d=0;
	scanf("%d",&a);
	c=a;
	if (c<=2)
	{
		printf("%d",c);
	}
	else{
		for (b=1;b<c;b++)
		{
			d=b%2;
			if(d!=0)
			{
				printf("%d ",b);
			}
		}
		d=b%2;
		if (d!=0)
		printf("%d",b);}
	return 0;
}
