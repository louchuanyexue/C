#include<stdio.h>
void f(int n,char L,char M,char R)
{
    if(n==1){
        printf("%c->%c\n",L,R);
        return;
    }
    f(n-1,L,R,M);
    printf("%c->%c\n",L,R);
    f(n-1,M,L,R);


}
int main()
{
    char a='A',b='B',c='C';
    int n;
    scanf("%d",&n);
    f(n,a,b,c);
    return 0;
}