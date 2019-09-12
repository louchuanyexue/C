#include<cstdio>
int main()
{
    char s[10010]={'\0'};
    char s1[10010]={'\0'};
    int r=0,p=0,c=0,flag = 0,i,temp,v=0,g=0,d=0;
    double n;
    int y=0;
    scanf("%s",&s);
    for(i=1;s[i]!='E';i++){
        if(s[i]!='.'){
            r = s[i] - 48+r*10;
            if(flag==1)p++;
            s1[y++] = s[i];
            c++;
        }
        else
        {
            flag = 1; 
        }

        
    }
    if(s[0]=='-')printf("-");
    temp = i+1;
    i++;
    for(i++;s[i]!='\0';i++){
        v=v*10+s[i]-48;
    }
    if(s[temp]=='+'){
        g=v-p;
        if(g>0){
            if(s1[0]!='0')printf("%c",s1[0]);
            for(int e=1;e<y;e++){
                printf("%c",s1[e]);
            }
            for(int j=0;j<g;j++){
                printf("0");
            }
        }
        else if(g==0){
            for(int e=0;e!=y;e++){
                printf("%c",s1[e]);
            }
        }
        else if(g<0){
            int we;
            for(int e=0;e<c-(g*(-1));e++){
                if(s1[e]!='0')
                printf("%c",s1[e]);
                we =e;
            }
            if(s1[we]=='0')printf("0");
            printf(".");
            for(int e=c-(g*(-1));s1[e]!='\0';e++){
                printf("%c",s1[e]);
            }
        }
    }
    else
    {
        printf("0.");
        for(int i=0;i<v-1;i++)printf("0");
        for(int i=0;i<c;i++)printf("%c",s1[i]);
    }
    return 0;
}