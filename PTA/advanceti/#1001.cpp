#include<cstdio>
#include<cmath>
#include<cstdlib>
int main()
{
    int a,b,c,ans,i=0,p,m=0,flag=0;
    int n[15]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    scanf("%d %d",&a,&b);
    if(a==b&&a==0)printf("0");
    if(a+b==0)printf("0");
    c = a+b;
    p = abs(c);
    while(p!=0){
       ans = p%10;
       n[i++] = ans;
       p = p/10; 
    }
    if(c<0)printf("-");
    for(int j=14,k=1;j>=0;k++,j--){
        if(n[j]!=-1)
        {printf("%d",n[j]);
            m++;
            flag = 1;
        }
        if(k%3==0&&flag==1&&j!=0)printf(",");
    }
    return 0;
}