#include<cstdio>
#include<cstring>
int main()
{
    char s1[110],s2[110],ans[110]={'\0'};
    int len1,len2,j=1,n,max;
    scanf("%s %s",s1,s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    if(len1>=len2)max=len1;
    else max=len2;
    for(int i = len1-1,k=len2-1;i>=0&&k>=0;i--,j++,k--){
        if(j%2==1){
            n = (s1[i]-96+s2[k])%13;
            if(n<10)ans[j-1]=n+48;
            else
            {
                switch (n)
                {
                    case 10:
                        ans[j-1]='J';
                        break;
                    case 11:
                        ans[j-1]='Q';
                        break;
                    case 12:
                        ans[j-1]='K';
                    default:
                        break;
                }
            }
            
        }
        else
        {
            n = s2[k]-s1[i];
            if(n<0)n+=10;
            ans[j-1]=n+48;
        }
    }
    if(max==len1){
        for(int i=len1-j;i>=0;i--,j++){
            //ans[j-1]=s1[i];
                if(j%2==1){
                n = (s1[i]-48)%13;
                if(n<10)ans[j-1]=n+48;
                else
                {
                    switch (n)
                    {
                        case 10:
                            ans[j-1]='J';
                            break;
                        case 11:
                            ans[j-1]='Q';
                            break;
                        case 12:
                            ans[j-1]='K';
                        default:
                            break;
                    }
                }
                
            }
            else
            {
                n = s1[i]*(-1)+48;
                if(n<0)n+=10;
                ans[j-1]=n+48;
            }
        }
    }
    else if(max==len2){
        for(int i=len2-j;i>=0;i--,j++){
            //ans[j-1]=s2[i];
            if(j%2==1){
                n = (s2[i]-48)%13;
                if(n<10)ans[j-1]=n+48;
                else
                {
                    switch (n)
                    {
                        case 10:
                            ans[j-1]='J';
                            break;
                        case 11:
                            ans[j-1]='Q';
                            break;
                        case 12:
                            ans[j-1]='K';
                        default:
                            break;
                    }
                }
                
            }
            else
            {
                n = s2[i]-48;
                if(n<0)n+=10;
                ans[j-1]=n+48;
            }
        }
    }
    int len3 = strlen(ans);
    for(int i=len3-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    return 0;
}