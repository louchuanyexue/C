#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
struct student{
    int id;
    int grade[5];
}stu[2010];
int now;
int r[1000000][4]={0};
char s[4]={'A','C','M','E'};
bool cmp(student a,student b){
    return a.grade[now]>b.grade[now];
}
int main()
{
    int n,m,q,f,temp=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&stu[i].id,&stu[i].grade[1],&stu[i].grade[2],&stu[i].grade[3]);
        stu[i].grade[0]=int((stu[i].grade[3]+stu[i].grade[1]+stu[i].grade[2])/3.0+0.5);
    }
    for(now=0;now<4;now++){
        sort(stu,stu+n,cmp);
        r[stu[0].id][now]=1;
        for(int i=1;i<n;i++){
            if(stu[i].grade[now]!=stu[i-1].grade[now])r[stu[i].id][now]=i+1;
            else r[stu[i].id][now]=r[stu[i-1].id][now];
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d",&q);
        f = r[q][0];
        temp = 0;
        for(int j=1;j<4;j++){
            if(r[q][j]<f){
                f=r[q][j];
                temp = j;
            }
        }
        if(f!=0)printf("%d %c\n",f,s[temp]);
        else{
            printf("N/A\n");
        }
    }
    return 0;
}