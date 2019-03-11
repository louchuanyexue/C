#include<stdio.h>
int main()
{
    int a,b,mi;
    scanf("%d %d",&a,&b);
    mi=a>=b?b:a;
    int s[10000]={0};
    for(int k=0;k<10000/a;k++){
        for(int i=0;a*k+b*i<10000;i++){
             if(a*k+b*i<10000)s[a*k+b*i]=1;
        }
    }
    int re=0;
    for(int y=0;y<10000;y++){
        if(s[y]==1)re++;
        else
        {
            re=0;
        }
        if(re==a)printf("%d",y-re);
        
    }
    return 0;
}