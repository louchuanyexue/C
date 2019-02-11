#include <stdio.h>
int main(){
    int length=0;
    char *s="123456789";
    while(*(s++))length++;
    printf("%d",length);
}
