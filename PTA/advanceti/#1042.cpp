#include<cstdio>
int main()
{
    int n,temp;
    int num[55]={0},cv;
    char s[55][4]={'\0'};
    scanf("%d",&n);
    cv=n;
    for(int i = 1;i<55;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<55;i++){
        n=cv;
        temp = num[i];
        n--;
        while(n>0){
        temp = num[temp];
        n--;
        }
        if(i<14){
            s[temp][0]='S';
            if(i>=10){
            s[temp][1]=i/10 + '0';
            s[temp][2]=i%10 + '0';
            }
            else if(i<10){
                s[temp][1]=i%10+'0';
                s[temp][2]='\0';
            }
        }
        if(13<i&&i<27){
            s[temp][0]='H';
            if(i>=23){
            s[temp][1]=(i-13)/10 + '0';
            s[temp][2]=(i-13)%10 + '0';
            }
            else if(i<23){
                s[temp][1]=(i-13)%10+'0';
                s[temp][2]='\0';
            }
        }
        if(26<i&&i<40){
            s[temp][0]='C';
            if(i>=36){
            s[temp][1]=(i-26)/10 + '0';
            s[temp][2]=(i-26)%10 + '0';
            }
            else if(i<36){
                s[temp][1]=(i-26)%10+'0';
                s[temp][2]='\0';
            }
        }
        if(39<i&&i<53){
            s[temp][0]='D';
            if(i>=49){
            s[temp][1]=(i-39)/10 + '0';
            s[temp][2]=(i-39)%10 + '0';
            }
            else if(i<49){
                s[temp][1]=(i-39)%10+'0';
                s[temp][2]='\0';
            }
        }
        if(52<i&&i<55){
            s[temp][0]='J';
            if(i==53){
            s[temp][1]='1';
            s[temp][2]='\0';
            }
            else if(i==54){
                s[temp][1]='2';
                s[temp][2]='\0';
            }
        }
    }
    for(int i=1;i<54;i++){
        printf("%s ",s[i]);
    }
    printf("%s",s[54]);
    return 0;
}
