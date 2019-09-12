#include<cstdio>
#include<cstring>
struct p{
    char s[15];
    char s1[15];
    int ch=0;
}node[1010];
int main()
{
    int n,flag=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s",node[i].s,node[i].s1);
        flag = 0;
        for(int j=0;j<15;j++){
            if(node[i].s1[j]=='1'){
                node[i].s1[j]='@';
                flag = 1;
            }
            if(node[i].s1[j]=='0'){
                node[i].s1[j]='%';
                flag = 1;
            }
            if(node[i].s1[j]=='O'){
                node[i].s1[j]='o';
                flag = 1;
            }
            if(node[i].s1[j]=='l'){
                node[i].s1[j]='L';
                flag = 1;
            }
        }
        if(flag==1){
            cnt++;
            node[i].ch=1;
        }
    }
    if(flag==1)printf("%d\n",cnt);
    for(int i = 0;i<n;i++){
        if(node[i].ch==1)printf("%s %s\n",node[i].s,node[i].s1);
    }
    if(flag == 0 && n == 1)printf("There is 1 account and no account is modified");
    else if(flag == 0)printf("There are %d accounts and no account is modified",n);
    return 0;
}