#include <stdio.h>
int main(){
	int n=0,m=0,i=0,a=0,b=1,c=1,d=0;
	scanf("%d %d",&n,&m);
	for(i=3;;i++){
		for(a=2;a<i;a++){
			if (i%a==0)
				{b = 0;
				break;}
			if (b==1)
				{c+=1;}
			if(c>=n&&c<=m){
				 d+=i;
			}
			if(n==1)
				d+=2;
			if(c>m){
				goto OUT;
			}}
	}
	OUT:
	return printf("%d",d);
}
