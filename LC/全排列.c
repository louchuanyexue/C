#include <stdio.h>
void f(char* s,int k);
int main(){
    char s[]="abc";
    f(s,0);
    return 0;
}
void f(char* s,int k){
    int length=0;
    while(s[length])length++;
    if(k==length-1){
        printf("%s",s);
        printf("\n");
    }
    for(int i=k;i<length;i++){
        char t =s[k];s[k]=s[i];s[i]=t;
        f(s,k+1);
        t =s[k];s[k]=s[i];s[i]=t;   
    } 
}