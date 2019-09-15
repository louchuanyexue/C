#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;

struct Car{
    char id[8];
    int time;
    char status[4];
}all[10010],vai[10010];

bool cmp1(Car a,Car b){
    if(strcmp(a.id,b.id)!=0)return strcmp(a.id,b.id)<0;
    else return a.time<b.time;
}

bool cmp2(Car a,Car b){
    return a.time<b.time;
}

map<string,int>parkTime;
int timeTo(int h,int m,int s ){
    return h*3600+m*60+s;
}

int main(){
    int n,k,h,m,s;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d %s",all[i].id,&h,&m,&s,all[i].status);
        all[i].time=timeTo(h,m,s);
    }
    sort(all,all+n,cmp1);
    int cnt=0,tc=0,maxtime=-1;
    for(int i=0;i<n-1;i++){
        if(!strcmp(all[i].id,all[i+1].id)&&!strcmp(all[i].status,"in")&&!strcmp(all[i+1].status,"out")){
            vai[cnt++]=all[i];
            vai[cnt++]=all[i+1];
            tc=all[i+1].time-all[i].time;
            if(parkTime.count(all[i].id)==0){
                parkTime[all[i].id]=0;
            }
            parkTime[all[i].id]+=tc;
            maxtime = max(maxtime,parkTime[all[i].id]);

        }
         
    }
    sort(vai,vai+cnt,cmp2);
    int now=0,numCar=0,t=0;
    for(int i=0;i<k;i++){
        scanf("%d:%d:%d",&h,&m,&s);
        t = timeTo(h,m,s);
        for(now;now<cnt&&vai[now].time<=t;now++){
            if(strcmp(vai[now].status,"in")==0)numCar++;
            else if(strcmp(vai[now].status,"out")==0)numCar--;
        }
        printf("%d\n",numCar);
    }
    map<string, int>::iterator it;
    for(it = parkTime.begin();it!=parkTime.end();it++){
        if(it->second==maxtime)printf("%s ",it->first.c_str());
    }
    printf("%02d:%02d:%02d",maxtime/3600,maxtime%3600/60,maxtime%60);
    return 0;
}