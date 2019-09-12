#include<cstdio>
#include<cstring>
int main(){
    char s1[70],s2[70],s3[70],s4[70];
    int len1,len2,len3,len4,i;
    char wek[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    len1 = strlen(s1);
    len2 = strlen(s2);
    len3 = strlen(s3);
    len4 = strlen(s4);
    for(i=0;i<len2 && i<len1;i++){
        if(s1[i]==s2[i] && s1[i]>='A' && s1[i]<='G'){
            printf("%s ",wek[s1[i]-65]);
            break;
        }
    }
    for(i++;i<len2 && i<len1;i++){
        if(s1[i]==s2[i] &&s1[i]>='A' && s1[i]<='N'){
            printf("%02d:",s1[i]-55);
            break;
        }
        if(s1[i]==s2[i] && s1[i]>='0'&&s1[i]<='9'){
            printf("%02d:",s1[i]-48);
            break;
        }
    }
    for( i = 0;i<len3&&i<len4;i++){
        if(s3[i]==s4[i] &&s3[i]>='A' && s3[i]<='Z'){
            printf("%02d",i);
            break;
        }
        if(s3[i]==s4[i] && s3[i]>='a'&&s3[i]<='z'){
            printf("%02d",i);
            break;
        }
    }
    return 0;
}