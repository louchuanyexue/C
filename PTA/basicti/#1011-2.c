#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    scanf("%d\n",&n);
    int temp = n;
    int a[n],b[n],c[n];
    for(int j=0;j<n;j++){
        scanf("%d %d %d",&a[j],&b[j],&c[j]);
    }
    for(int k=0;k<n;k++){
        if((a[k]+b[k])>c[k])printf("Case #%d: true\n",i);
        else printf("Case #%d: false\n",i);
        i++;
    }
    return 0;
}
