#include<stdio.h>
void swap(int a,int b);
int main()
{
    int x=2,y=3;
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
void swap(int a,int b){
    int temp= a;
    a=b;
    b=temp;
}