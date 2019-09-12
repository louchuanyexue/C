#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct costomer{
    char name[25];
    int mouth;
    int dd;
    int hh;
    int mm;
    int q;
}cos[1010];

bool cmp(costomer a,costomer b){
if(strcmp(a.name,b.name)!=0)return strcmp(a.name,b.name)<0;
else if(a.dd!=b.dd)return a.dd<b.dd;
else if(a.hh!=b.hh)return a.hh<b.hh;
else return a.mm<b.mm;
}

int main(){
    int f[24];
    int n;
    for(int i=0;i<24;i++){
        scanf("%d",&f[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d:%d %s",cos[i].name,&cos[i].mouth,&cos[i].dd,&cos[i].hh,&cos[i].mm);
    }
    sort(cos,cos+n,cmp);

    return 0;
}