#include<cstdio>
#include<cstring>
int main()
{
    char s[110]={'\0'};
    char s1[110]={'\0'};
    scanf("%s",&s);
    if(s[0]=='0')printf("zero");
    int a=0,l=0,len;
    for(int i=0;s[i]!='\0';i++){
        a+=s[i]-'0';
    }
    while(a!=0){
        s1[l++]=a%10+'0';
        a/=10;
    }
    len = strlen(s1);
    for(int i=len-1;i>0;i--){
        switch (s1[i])
        {
        case '0':
            printf("zero ");
            break;
        case '1':
            printf("one ");
            break;
        case '2':
            printf("two ");
            break;
        case '3':
            printf("three ");
            break;
        case '4':
            printf("four ");
            break;
        case '5':
            printf("five ");
            break;
        case '6':
            printf("six ");
            break;
        case '7':
            printf("seven ");
            break;
        case '8':
            printf("eight ");
            break;
        case '9':
            printf("nine ");
            break;
        default:
            break;
        }
    }
    switch (s1[0])
        {
        case '0':
            printf("zero");
            break;
        case '1':
            printf("one");
            break;
        case '2':
            printf("two");
            break;
        case '3':
            printf("three");
            break;
        case '4':
            printf("four");
            break;
        case '5':
            printf("five");
            break;
        case '6':
            printf("six");
            break;
        case '7':
            printf("seven");
            break;
        case '8':
            printf("eight");
            break;
        case '9':
            printf("nine");
            break;
        default:
            break;
        }
    return 0;
}