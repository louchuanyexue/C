#include<cstdio>
int main()
{
    int a,b,ad=0,bd=0,ap=0,bp=0,ia=0,ib=0;
    scanf("%d %d %d %d",&a,&ad,&b,&bd);
    do
    {
        if(a%10 == ad)ia++;
        a=a/10;
    } while (a>0);
   // printf("ia = %d\n",ia);
    while (ia--)
    {
        ap = ap*10+ad;
    };
   // printf("ap = %d\n",ap);
    do
    {
        if(b%10 == bd)ib++;
        b=b/10;
    } while (b>0);
    //printf("ib = %d\n",ib);
    while (ib--)
    {
        bp = bp*10+bd;
    };
    //printf("bp = %d\n",bp);
    printf("%d",ap+bp);
    return 0;
}
