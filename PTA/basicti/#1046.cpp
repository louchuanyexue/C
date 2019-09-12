#include<cstdio>
int main(){
int as,ah,bs,bh,a=0,b=0,n;
scanf("%d",&n);
while (n>0)
{
    n--;
    scanf("%d %d %d %d",&as,&ah,&bs,&bh);
    if(ah == as+bs && bh != as+bs)b++;
    if(ah != as+bs && bh == as+bs)a++;
}
printf("%d %d",a,b);
return 0;   
}