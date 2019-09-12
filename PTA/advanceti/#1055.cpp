#include<cstdio>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct richest{
    char name[10];
    int age;
    int worth;
}ri[100010];

bool cmp(richest a,richest b){
    if(a.worth!=b.worth)return a.worth>b.worth;
    else if(a.age!=b.age)return a.age<b.age;
    else return strcmp(a.name,b.name)<0;
}
int main()
{
    int n,k,r,a1,a2,flag = 0,cnt=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%s %d %d",ri[i].name,&ri[i].age,&ri[i].worth);
    }
    sort(ri,ri+n,cmp);
    for(int i=0;i<k;i++){
        scanf("%d %d %d",&r,&a1,&a2);
        printf("Case #%d:\n",i+1);
        for(int j=0;j<n;j++){
            if(ri[j].age>=a1&&ri[j].age<=a2){
                printf("%s %d %d\n",ri[j].name,ri[j].age,ri[j].worth);
                flag = 1;
                cnt++;
            }
            if(cnt==r)break;
        }
        if(flag == 0)printf("None\n");
        flag = 0;
        cnt=0;
    }
    return 0;
}