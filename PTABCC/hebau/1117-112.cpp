#include<stdio.h>

void hanno(int n,char L[100],char M[100],char R[100]);
int main()
{
	int n;
	char L[100] = "";
	char M[100] = "";
	char R[100] = "";
	
	scanf("%d",&n);
	scanf("%s",L);
	scanf("%s",M);
	scanf("%s",R);
	hanno(n,L,M,R);
	
	return 0;	
} 

void hanno(int n,char L[100],char M[100],char R[100]){
    if(n){
    	hanno(n-1,L,R,M);
    	printf("%s->%s\n",L,R);
    	hanno(n-1,M,L,R);
	}
}
