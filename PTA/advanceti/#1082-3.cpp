#include<cstdio>
#include<cstring>
int main()
{
    char s[15];
    char z[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char wei[5][5]={"Shi","Bai","Qian","Wan","Yi"};
    int len,left,right,flag=0,isprint=0;
    scanf("%s",s);
    len = strlen(s);
    left = 0;
    right = len-1;
    if(s[left]=='-'){
        left++;
        printf("Fu");
    }
    while((left+4)<=right){
        right=right-4;
    }
    while(left<len){
        while(left<=right){
            if(s[left]=='0'&&left>0){
                flag =1;
            }
            else{
                if(flag == 1){
                    printf(" ling");
                    flag = 0;
                }
                if(left>0)printf(" ");
                printf("%s",z[s[left]-'0']);
                isprint = 1;
                if(right != left)printf(" %s",wei[right-left-1]);
            }
            left++;
        }
        if(isprint == 1 && right != len-1)printf(" %s",wei[(len-right)/4+2]);
        isprint = 0;
        right +=4;
    }

    return 0;
}