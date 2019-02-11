#include <stdio.h>
char* f(char* s){
    int length=0;
    while(s[length])length++;
    if(s==NULL||length<2)
        return s;
    char temp = s[0];
    s[0]=s[length-1];
    s[length-1]='\0';
    f(s+1);
    s[length-1]=temp;
    return s;
}
int main(){
    char s[]="123456789";
    printf("%s",f(s));
    return 0;
}