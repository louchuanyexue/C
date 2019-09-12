#include<cstdio>
int match(char a,char b){
    if(a == 'C'&&b == 'J')return 1;
    else if(a == 'C'&&b =='B')return 2;
    else if(a == 'B'&&b == 'J')return 2;
    else if (a == 'B'&&b == 'C')return 1;
    else if (a == 'J' && b == 'C')return 2;
    else if (a == 'J' && b == 'B')return 1;
    else return 3;
}
int main(){
    int n,js=0,jp=0,jf=0,ys=0,yp=0,yf=0,ma=0,mb=0;
    char j,y,ca,cb;
    int a[3]={0},b[3]={0};
    scanf("%d",&n);
    while (n>0)
    {
        n--;
        scanf("\n%c %c",&j,&y);
        if(match(j,y)==1){
            js++;
            yf++;
            if(j == 'B')a[0]++;
            if (j == 'C')a[1]++;
            if(j == 'J')a[2]++;
            
        }
        else if (match(j,y)==2)
        {
            jf++;
            ys++;
            if(y == 'B')b[0]++;
            if (y == 'C')b[1]++;
            if(y == 'J')b[2]++;
        }
        else
        {
            jp++;
            yp++;
        }
    }
    for(int i=2;i>=0;i--){
        if(a[i]>=ma){
            ma=a[i];
            if(i == 2)ca='J';
            if(i == 1)ca='C';
            if(i == 0)ca='B';
        }
    }
    for(int i=2;i>=0;i--){
        if(b[i]>=mb){
            mb=b[i];
            if(i == 2)cb='J';
            if(i == 1)cb='C';
            if(i == 0)cb='B';
        }
    }
    printf("%d %d %d\n",js,jp,jf);
    printf("%d %d %d\n",ys,yp,yf);
    printf("%c %c",ca,cb);
    return 0;
}