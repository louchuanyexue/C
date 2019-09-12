#include<cstdio>
#include<cstring>
int main(){
    int n;
    int zh=100,zm=100,zs=100,h,m,s;
    int wh=-1,wm=-1,ws=-1;
    char s0[20],s1[20],s2[20];
    scanf("%d",&n);
    while(n--){
        scanf("%s",s0);
        scanf("%d:%d:%d",&h,&m,&s);
        if(h<zh){
            zh=h;
            zm=m;
            zs=s;
            strcpy(s1,s0);
        }
        else if(h==zh){
            if(m<zm){
                zh=h;
                zm=m;
                zs=s;
                strcpy(s1,s0);
            }
            else if(m==zm){
                if(s<zs){
                zh=h;
                zm=m;
                zs=s;
                strcpy(s1,s0); 
                }
            }
        }
        scanf("%d:%d:%d",&h,&m,&s);
        if(h>wh){
            wh=h;
            wm=m;
            ws=s;
            strcpy(s2,s0);
        }
        else if(h==wh){
            if(m>wm){
                wm=m;
                wh=h;
                ws=s;
                strcpy(s2,s0);
            }
            else if(m==wm){
                if(s>ws){
                    wm=m;
                    wh=h;
                    ws=s;
                    strcpy(s2,s0);
                }
            }
        }
    }
    printf("%s %s",s1,s2);
    return 0;
}