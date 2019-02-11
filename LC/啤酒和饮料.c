#include<stdio.h>
int main()
{
    int n;
    for(int beer=0;beer<100;beer++){
        for(int water=0;water<100;water++){
            if((beer<water)&&((2.3*beer+1.9*water)==82.3)){
                n=beer;
            }
        }
    }
    printf("%d",n);
    return 0;
}