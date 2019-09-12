#include<cstdio>
void tans(int n,char s[]){
    int temp;
    int i=1;
    do{
        temp = n%13;
        if(temp<10)s[i]=temp+48;
        if(temp>=10)s[i]=temp+55;
        i--;
        n=n/13;
    }while(n!=0);
}
int main()
{
    int j,k,l;
    char r[2]={'0'};
    char g[2]={'0'};
    char b[2]={'0'}; 
    scanf("%d %d %d",&j,&k,&l);
    tans(j,r);
    tans(k,g);
    tans(l,b);
    printf("#%c%c%c%c%c%c",r[0],r[1],g[0],g[1],b[0],b[1]);
   //printf("#%s%s%s",r,g,b);
    return 0;
}