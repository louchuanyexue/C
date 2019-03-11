#include<stdio.h>
int main(){
int n,m,t,a,b;
scanf("%d",&t);
a=3*t;
n=t/90;
m=t%90;
b=270*n;
if(m<=10){
	b+=9*m;
}
else if(m>=40&&m<=50){
	b+=9*(m-40)+90;
}
else if(m>=80&&m<=90){
	b+=9*(m-80)+180;
}
if(a>b){
	printf("@_@ %d",a);
}
else if(a==b){
	printf("-_- %d",a);
}
else{
	printf("^_^ %d",b);
}
return 0;
} 

