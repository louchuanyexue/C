#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct cstomer{
    char name[25];
    int mouth;
    int dd;
    int hh;
    int mm;
    bool sta;
}cs[1010];
cstomer temp;
int f[24];

bool cmp(cstomer a,cstomer b){
if(strcmp(a.name,b.name)!=0)return strcmp(a.name,b.name)<0;
else if(a.dd!=b.dd)return a.dd<b.dd;
else if(a.hh!=b.hh)return a.hh<b.hh;
else return a.mm<b.mm;
}

void getans(int on,int off,int &time,int &money){
    temp = cs[on];
    while(temp.dd<cs[off].dd||temp.hh<cs[off].hh||temp.mm<cs[off].mm){
        time++;
        money+=f[temp.hh];
        temp.mm++;
        if(temp.mm>=60){
            temp.mm=0;
            temp.hh++;
        }
        if(temp.hh>=24){
            temp.hh=0;
            temp.dd++;
        }
    }
}
int main(){
    char line[10];
    int n;
    for(int i=0;i<24;i++){
        scanf("%d",&f[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d:%d %s",cs[i].name,&cs[i].mouth,&cs[i].dd,&cs[i].hh,&cs[i].mm,line);
        if(strcmp(line,"on-line")==0)cs[i].sta=true;
        else cs[i].sta=false;

    }
    sort(cs,cs+n,cmp);
    int allmoney = 0;
    int on =0 ,off,next;
    while(on<n){
        int needprint = 0;
        next=on;
        while(next<n&&strcmp(cs[on].name,cs[next].name)){
            if(needprint==0&&cs[next].sta==true)needprint=1;
            if(needprint==1&&cs[next].sta==false)needprint=2;
            next++;
        }
        if(needprint<2){
            on=next;
            continue;
        }
        printf("%s %02d\n",cs[on].name,cs[on].mouth);
        while(on<next){
            while(on<next-1&&!(cs[on].sta==true&&cs[on+1].sta==false))on++;
            off = on+1;
            if(off == next){
                on = next;
                break;
            }
            printf("%02d:%02d:%02d ",cs[on].dd,cs[on].hh,cs[on].mm);
            printf("%02d:%02d:%02d ",cs[off].dd,cs[off].hh,cs[off].mm);
            int time=0,money=0;
            getans(on,off,time,money);
            allmoney+=money;
            printf("%d $%.2f\n",time,money/100.0);
            on = off+1;
        }
    }
    printf("Total amount: $%.2f\n",allmoney/100.0);
    return 0;
}