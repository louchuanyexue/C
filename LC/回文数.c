#include <stdio.h>
int isPalindrome(int x) {
    if(x<0)
        return -1;
    else if(x>=10){
        int i,temp,b=0,pop,c;
        int rev[50]={0};
        temp = x;
        for(i=0;temp !=0;i++){
            rev[i] = temp%10;
            temp /= 10;
        }
        c=i;
        i=0;
        while(i<c){
            pop = rev[i];
            b*=10;
            b+=pop;
            i++;
        }
        if(b==x)
            return 1;
        else
            return -1;
    }
    else
        return 1;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",isPalindrome(x));
}