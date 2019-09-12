#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    i=1;
    scanf("%d\n",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if(b>(c-a))printf("Case #%d: true\n",i);
        else printf("Case #%d: false\n",i);
        i++;
    }
    return 0;
}
