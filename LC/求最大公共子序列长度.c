#include<stdio.h>
int f(char* s1,char* s2){
    if(s1[0]=='\0'||s2[0]=='\0')
        return 0;
    if(s1[0]==s2[0])
        return f(s1+1,s2+1)+1;
    else
        return f(s1+1,s2)>f(s1,s2+1) ? f(s1+1,s2) : f(s1,s2+1);
    
}
int main(){
    char* s1="abcde";
    char* s2="bde";
    printf("%d",f(s1,s2));
}