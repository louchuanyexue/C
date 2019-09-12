#include<cstdio>
#include<cstring>
void reverse(char s[]){
    char temp;
    int j = strlen(s);
    for(int i=0;i<j/2;i++){
        temp = s[i];
        s[i] = s[j-i-1];
        s[j-i-1] = temp;
    }
}
int main(){
    char s[270],s1[270];
    int n,len,flag=0;
    scanf("%d\n",&n);
    for(int i=0;;i++){
        s1[i]=getchar();
        if(s1[i]=='\n'){
            s1[i]='\0';
            break;
        }
    }
    reverse(s1);
    for(int k=1;k<n;k++){
        for(int i=0;;i++){
        s[i]=getchar();
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        }
        reverse(s);
        len = strlen(s1);
        for(int j=0;j<len;j++){
            if(s[j]!=s1[j]){
                s1[j]='\0';
                break;
            }
        }
    }
    reverse(s1);
    if(s1[0]!='\0')printf("%s",s1);
    else
    {
        printf("nai");
    }
    
    return 0;
}