#include <stdio.h>
char f(char* s){
    if(*s){
        f(s+1);
        return printf("%c",*s);
    }
}
int main(){
    char s[]="123456789";
    f(s);
    return 0;
}