#include<stdio.h>

int main(){
	int a,b,flag;
    char c;

	a=0;
	b=0;
    while(1){
    	scanf("%c",&c);
    	if(c=='.') break;
    	if(c!=' '){
    		a++;
		}
		else if(c=' '){
			if(a-b){
				printf("%d ",a-b);
    		    b=a;
			}
		}
	}
	flag=a-b;
	if(flag!=0){
	printf("%d",flag);}
	return 0;
}
