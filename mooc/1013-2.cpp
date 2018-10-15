#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b,c,i,cnt;
	a=0;
	b=0;
	c=0;
	cnt=1;
	scanf("%d",&n);
	a=n;
	while(a!=0){
		a/=10;
		b++;
		cnt*=10;
	}
	cnt=cnt/10;
	if(n<0)
		printf("fu ");
	for(i=b-1;i>0;i--){
		c=(n/cnt)%10;
		switch (abs(c))
		{
			case 0: printf("ling");break;
			case 1: printf("yi");break;
			case 2: printf("er");break;
			case 3: printf("san");break;
			case 4: printf("si");break;
			case 5: printf("wu");break;
			case 6: printf("liu");break;
			case 7: printf("qi");break;
			case 8: printf("ba");break;
			case 9: printf("jiu");break;
		}
		cnt=cnt/10;
		printf(" ");
	}
	c=n%10;
	switch (c)
		{
			case 0: printf("ling");break;
			case 1: printf("yi");break;
			case 2: printf("er");break;
			case 3: printf("san");break;
			case 4: printf("si");break;
			case 5: printf("wu");break;
			case 6: printf("liu");break;
			case 7: printf("qi");break;
			case 8: printf("ba");break;
			case 9: printf("jiu");break;
		}
	return 0;
} 
