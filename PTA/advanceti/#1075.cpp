#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct user{
    int score[6];
    int re;
    int tot;
    int pn;
    int id;
}us[10010];

int n;

void init(){
    for(int i=1;i<=n;i++){
        us[i].re=-1;
        us[i].tot=0;
        us[i].pn=0;
        memset(us[i].score,-1,sizeof(us[i].score));
        us[i].id=i;
    }
}
bool cmp(user a,user b){
    if(a.tot!=b.tot)return a.tot>b.tot;
    else if(a.pn!=b.pn)return a.pn>b.pn;
    else return a.id<b.id;
}
int main()
{
    int k,m,name,tn,ts;
    int full[6]={0};
    scanf("%d %d %d",&n,&k,&m);
    init();
    for(int i=1;i<=k;i++){
        scanf("%d",&full[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&name,&tn,&ts);
        if(ts!=-1){
            us[name].re=0;
        }
        if(ts==-1&&us[name].score[tn]==-1){
            us[name].score[tn]=0;
        }
        if(ts==full[tn]&&us[name].score[tn]<full[tn]){
            us[name].pn++;
        }
        if(ts>us[name].score[tn])us[name].score[tn]=ts;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(us[i].score[j]>=0)us[i].tot+=us[i].score[j];
        }
    }
    sort(us+1,us+n+1,cmp);
    int r=1;
    for(int i=1;i<=n&&us[i].re==0;i++){
        if(i>1&&us[i].tot!=us[i-1].tot){
            r=i;
        }
        printf("%d %05d %d",r,us[i].id,us[i].tot);
        for(int j=1;j<=k;j++){
            if(us[i].score[j]==-1)printf(" -");
            else printf(" %d",us[i].score[j]);
        }
        printf("\n");
    }
    return 0;
}