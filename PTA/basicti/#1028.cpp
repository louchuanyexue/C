#include<cstdio>
int main(){
    int n,k=0,maxm=100,maxy=10000,maxd=100,miny=0,minm=0,mind=0,y,m,d;
    bool flag =0;
    char s[10],ma[10],mi[10];
    scanf("%d",&n);
    while(n--){
        scanf("%s %d/%d/%d",&s,&y,&m,&d);
        if(y==1814 && m==9 && d>=6){
            k++;
            flag=1;}
        else if(y==1814 && m>9){
            k++;
            flag=1;}
        else if(y>1814 && y<2014){
            k++;
            flag=1;}
        else if(y==2014 && m<9){
            k++;
            flag=1;}
        else if(y==2014 && m==9 && d<=6){
            k++;
            flag=1;}
        if(flag ==1 && y<maxy){
            maxy=y;
            maxm=m;
            maxd=d;
            for(int i=0;i<10;i++){
            ma[i]=s[i];
            }
        }
        else if(flag == 1 && y==maxy && m<maxm){
            maxy=y;
            maxm=m;
            maxd=d;
            for(int i=0;i<10;i++){
            ma[i]=s[i];
            }
        }
        else if(flag ==1 && y==maxy && m==maxm && d<maxd){
            maxy=y;
            maxm=m;
            maxd=d;
            for(int i=0;i<10;i++){
            ma[i]=s[i];
            }
        }
        if(flag==1 && y>miny){
            miny=y;
            minm=m;
            mind=d;
            for(int i=0;i<10;i++){
            mi[i]=s[i];
            }
        }
        else if(flag==1 && y==miny && m>minm){
            miny=y;
            minm=m;
            mind=d;
            for(int i=0;i<10;i++){
            mi[i]=s[i];
            }
        }
        else if(flag=1 && y==miny && m==miny && d>mind){
            miny=y;
            minm=m;
            mind=d;
            for(int i=0;i<10;i++){
            mi[i]=s[i];
            }
        }
        flag=0;
    }
    if(k!=0)printf("%d %s %s\n",k,ma,mi);
    else printf("0");
    return 0;
}