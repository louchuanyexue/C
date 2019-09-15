#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct student{
    char id[11];
    char name[11];
    int grade;
}stu[100010];

bool cmp(student a,student b){
    return a.grade>b.grade;
}

int main(){
    int n,i1,i2,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s %d",stu[i].name,stu[i].id,&stu[i].grade);
    }
    scanf("%d %d",&i1,&i2);
    sort(stu,stu+n,cmp);
    for(int i=0;i<n;i++){
        if(stu[i].grade>=i1&&stu[i].grade<=i2){
            printf("%s %s\n",stu[i].name,stu[i].id);
            flag=1;
        }
    }
    if(flag==0)printf("NONE");
    return 0;
}