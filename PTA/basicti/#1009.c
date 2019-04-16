#include<stdio.h>
int main(){
    char s[88]="\0";
    gets(s);
    int t;
    for(int i=87;i>=0;i--){
        if(s[i] == ' '||i==0){
            if(i == 0)t=i;
            if(i != 0)t=i+1;
            while(1){
                if(s[t] != ' ' && s[t] != '\0'){
                    printf("%c",s[t]);
                    t++;
                }
                else{
                    if(i != 0)printf("%c",' ');
                    break;
                }
            }
        }
    }
}