#include<cstdio>
#include<cstring>
int main()
{
    char s[15],we[10],ans[15][10];
    int len,a,b,flag;
    char w[10][9]={"Yi","Qian","Bai","Shi","Wan","Qian","Bai","Shi"};
    char n[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    scanf("%s",s);
    len = strlen(s);
    if(s[0]=='-'){
        printf("Fu");
        // for(int i = 0;i<len;i++){
        //     if(s[i]!='\0')we[i]=
        // }
        int j=0;
        j=10-len;
        for(int i = 1;i<len;i++){
            printf(" %s",n[s[i]-'0']);
            if(s[i]-'0'!=0)printf(" %s",w[j]);
            j++;
        }
    }
    else{
        // for(int i=len-1,j=0;i>=0;i--,j++){
        //     if(s[i]-'0'!=0)ans[j]=n[s[i]];
        // }
        // int j=0;
        // j=9-len;
        // for(int i = 0;i<len-1;i++){
        //     printf("%s ",n[s[i]-'0']);
        //     if(s[i]-'0'!=0){
        //         printf("%s ",w[j]);

        //     }
        //     j++;
        // }
        //     printf("%s ",n[s[len-1]-'0']);
        //     if(s[len-1]-'0'!=0)printf("%s ",w[j]);
        //     j++;
        // }
    return 0;
}