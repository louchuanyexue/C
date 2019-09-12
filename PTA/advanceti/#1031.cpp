#include<cstdio>
#include<cstring>
int main(){
    char s[100];
    int n,temp;
    scanf("%s",s);
    n = strlen(s);
    temp = (n+2)/3;
    for(int i=0;i<temp-1;i++){
        printf("%c",s[i]);
        for(int k=0;k<n-(temp*2);k++){
            printf(" ");
        }
        printf("%c\n",s[n-i-1]);
    }
    for (int i = temp-1; i <= n-temp; i++)
    {
        printf("%c",s[i]);
    }
    
    return 0;
}