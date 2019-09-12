#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct student{
    int flag=5;
    char id[10];
    int de;
    int cai;
    int score;
}stu[100010];
bool cmp(student a,student b){
    if(a.flag !=b.flag)return a.flag<b.flag;
    else if(a.score!=b.score)return a.score>b.score;
    else if(a.de!=b.de)return a.de>b.de;
    else return strcmp(a.id,b.id)<0;
}
int main()
{
    int n,l,h,k=0;
    scanf("%d %d %d",&n,&l,&h);
    for(int i=0;i<n;i++){
        scanf("%s %d %d",stu[i].id,&stu[i].de,&stu[i].cai);
        stu[i].score=stu[i].cai+stu[i].de;
        if(stu[i].cai>=l&&stu[i].de>=l)k++;
        if(stu[i].cai>=h&&stu[i].de>=h)stu[i].flag=1;
        else if(stu[i].de>=h&&stu[i].cai>=l)stu[i].flag = 2;
        else if(stu[i].de>=stu[i].cai&&stu[i].cai>=l)stu[i].flag=3;
        else if(stu[i].cai>=l&&stu[i].de>=l)stu[i].flag=4;
    }
    sort(stu,stu+n,cmp);
    printf("%d\n",k);
    for(int i=0;i<k;i++){
        printf("%s %d %d\n",stu[i].id,stu[i].de,stu[i].cai);
    }
    return 0;
}