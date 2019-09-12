#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct student
{
    int id;
    char name[10];
    int grade;
}stu[100010];

int now;

bool cmp(student a,student b){
    if(now==1)return a.id<b.id;
    else if(now==2){
        if(strcmp(a.name,b.name)!=0)return strcmp(a.name,b.name)<0;
        else return a.id<b.id;
    }
    else{
        if(a.grade!=b.grade)return a.grade<b.grade;
        else return a.id<b.id;
    }
}
int main()
{
    int n, c;
    scanf("%d %d",&n,&c);
    for(int i =0;i<n;i++){
        scanf("%d %s %d",&stu[i].id,stu[i].name,&stu[i].grade);
    }
    now = c;
    sort(stu,stu+n,cmp);
    for(int i = 0;i<n;i++){
        printf("%06d %s %d\n",stu[i].id,stu[i].name,stu[i].grade);
    }
    return 0;
}