#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct student
{
    char id[15];
    int score;
    int r;
    int kid;
}stu[30010];
bool cmp(student a,student b)
{
    if(a.score!=b.score)
        return a.score>b.score;
    else
    {
        return strcmp(a.id,b.id)<0;
    }
    
}
int main()
{
    int n,n1,num=0,r=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&n1);
        for(int j=0;j<n1;j++){
            scanf("%s %d",stu[num].id,&stu[num].score);
            stu[num].kid=i+1;
            num++;
        }
        sort(stu+num-n1,stu+num,cmp);
        stu[num-n1].r=1;
        for(int k=num-n1+1;k<num;k++){
            if(stu[k].score!=stu[k-1].score){
                stu[k].r=k-num+n1+1;
            }
            else{
                stu[k].r=stu[k-1].r;
            }
        }
    }
    sort(stu,stu+num,cmp);
    printf("%d\n",num);
    printf("%s 1 %d %d\n",stu[0].id,stu[0].kid,stu[0].r);
    for(int i=1;i<num;i++){
        if(stu[i].score!=stu[i-1].score)r=i+1;
        printf("%s %d %d %d\n",stu[i].id,r,stu[i].kid,stu[i].r);
    }
    return 0;
}