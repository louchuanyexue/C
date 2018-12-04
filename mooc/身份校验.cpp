#include<stdio.h>

int main(){
	int n,a,b,c;
	int check[11],moo[11];
	char c;
	
	a=0;
	b=0;
	c=0;
	check[0]=0;
	check[1]=1;
	check[2]=2;
	check[3]=1;
	check[4]=2;
	check[5]=2;
	check[6]=1;
	check[7]=2;
	check[8]=2;
	check[9]=2;
	check[10]=2;
	
	moo[0]=1;
	moo[1]=0;
	moo[2]=10;
	moo[3]=9;
	moo[4]=8;
	moo[5]=7;
	moo[6]=6;
	moo[7]=5;
	moo[8]=4;
	moo[9]=3;
	moo[10]=2;
	
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%c",&m);
		if(m='X'){
			m=48;
		}
		b=m*check[m];
		a+=b;
		c=a%11;
		
	}
	return 0;
} 
