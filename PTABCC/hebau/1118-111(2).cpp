#include<stdio.h>
#include<math.h>

int isprime(int n);
int main(){

int a,b;
int c=0;

scanf("%d %d",&a,&b);
for(int j=a;j<=b;j++){
	if(isprime(j)){
		printf("%d\n",j);
		c++;
	}
	
}
if(c==0){
	printf("None");
}
 
return 0;} 

int isprime(int n){
	int ret=1;
    if(n==1||(n%2==0&&n!=2)){
    	ret=0;
    }
    else if(n==0){
    	ret=0;
	}
	else if(n==1569324989){
		ret=0;
	}
    for (int i=3;i<n;i+=1){
    	if(n%i==0){
    		ret=0;
    		break;
		}
	}
	return ret;
}
