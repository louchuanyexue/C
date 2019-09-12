#include<cstdio>
struct Plo{
    char s[20];
    int sn;
    int zn;
}p1[1010];
int main()
{
    int n,i=0,k;
    scanf("%d",&n);
    while(n--){
        scanf("%s %d %d",&p1[i].s,&p1[i].sn,&p1[i].zn);
        i++;
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        for(int i=0;i<1010;i++){
            if(p1[i].sn==k)printf("%s %d\n",p1[i].s,p1[i].zn);
        }
    }
    
    return 0;
}
