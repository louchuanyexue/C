#include<stdio.h>

int main(){
	
int x,y,a,b,c,d;

scanf("%d %d",&x,&y); 
a=(x/100)*60+x%100;
b=(y/100)*60+y%100;
c=(b-a)/60;
d=(b-a)%60;

if (c<10){
	printf("0%d",c);
}
else{
	printf("%d",c);
}
printf(":");
if(d<10){
	printf("0%d",d);
}
else{
	printf("%d",d);
}

return 0;}
