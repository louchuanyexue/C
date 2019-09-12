#include<stdio.h>
int main()
{
int n,a=0,b=0,c=0,rev=0;
int m=0,r=0,l=0,p=0,t=0;
scanf("%d",&n);
char s[100] = {' '};
while(scanf("%s",s)!=EOF){
    for(int i;i<100;i++){
        if(s[i]==' '&&l==0&&m==0&&r==0)continue;
        else if(s[i]=='A'&&l==0&&l==0){
            l++;
        }
        else if(s[i]=='P'&&b==0){
            p++;
            if(p>1)break;
        }
        else if(s[i]=='A'&&p){
            m++;
        }
        else if(s[i]=='T'&&m&&p){
            t++;
            if(t>1)break;
        }
        else if(s[i]=='A'&&m&&p&&t){
            r++;
        }
        else if(s[i]==' '&&m&&r&&p&&t)continue;
        else rev=0;
    }
    if(l*m==r&&p==1&&t==1&&m>=1)rev=1;
    if(rev)printf("YES\n");
    else printf("NO\n");

} 
return 0;
}