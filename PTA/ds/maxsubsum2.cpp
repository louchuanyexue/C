#include <stdio.h>

int main()
{	int n=0;
	scanf("%d",&n);
	int a[n],i;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int Maxitem,Thisitem;
 	Maxitem=0;
 	Thisitem=0;
	for (i=0;i<n;i++)
	{
		Thisitem += a[i];
		if (Thisitem>Maxitem)
 		{
 			Maxitem=Thisitem;
		}
		else if(Thisitem<0)
		{
			Thisitem=0;
		}
	}	
	printf("%d",Maxitem);
	return 0;
 }

