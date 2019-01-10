#include<stdio.h>
int main(){
	int zi,mu,r,big,mm,zz;
	scanf("%d/%d",&zi,&mu);
	
			mm=mu;
			zz=zi;
			
			while(zi!=0){
				r=mu%zi;
				mu=zi;
				zi=r;}
	printf("%d/%d",zz/mu,mm/mu);
    return 0;

	
}
