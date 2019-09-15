#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

struct student{
    int id,ge,gi,fs,scid,r;
    int dream[5];
    
}stu[40010];
struct school{
    int cn;
    int num;
    int id[40010];
    int lastid;
}sc[110];
bool cmp(student a,student b){
    if(a.fs!=b.fs)return a.fs>b.fs;
    else return a.ge>b.ge;
}
bool cmpid(int a,int b){
    return stu[a].id<stu[b].id;
}

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<n;i++){
        stu[i].id=i;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&sc[i].cn);
        sc[i].lastid=-1;
        sc[i].num=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&stu[i].ge,&stu[i].gi);
        stu[i].fs=(stu[i].ge+stu[i].gi)/2;
        for(int j=0;j<k;j++){
            scanf("%d",&stu[i].dream[j]);
        }
    }
    sort(stu,stu+n,cmp);
    //stu[0].r=1;
    for(int i=0;i<n;i++){
        if(i>0&&stu[i].fs==stu[i-1].fs&&stu[i].ge==stu[i-1].ge)stu[i].r=stu[i-1].r;
        else stu[i].r=i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int choice = stu[i].dream[j];
            if(sc[choice].num<sc[choice].cn||(sc[choice].lastid!=-1&&stu[sc[choice].lastid].r==stu[i].r)){
                sc[choice].lastid=i;
                sc[choice].id[sc[choice].num]=i;
                sc[choice].num++;
                break;
            }
        }
    }
    for(int i=0;i<m;i++){
        if(sc[i].num>0){
            sort(sc[i].id,sc[i].id+sc[i].num,cmpid);
            for(int j=0;j<sc[i].num;j++){
                printf("%d",stu[sc[i].id[j]].id);
                if(j<sc[i].num-1)printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}