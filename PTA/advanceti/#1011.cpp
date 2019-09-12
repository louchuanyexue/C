#include<cstdio>
int main(){
    double num[5]={0};
    double max=0,temp=1;
    char s[5];
    int j;
    for(int i=1;i<4;i++){
        scanf("%lf %lf %lf",&num[1],&num[2],&num[3]);
            for(int i=1;i<4;i++){
                if(num[i]>max){
                    max=num[i];
                    j=i;
                }
            }
            temp *= max;
            max=0;
            if(j==1) s[i]= 'W';
            else if(j==2) s[i]='T';
            else if(j==3) s[i]='L';
    }
    for(int i=1;i<4;i++){
        printf("%c ",s[i]);
    }
    printf("%.2f",(temp*0.65-1)*2);
    return 0;
}