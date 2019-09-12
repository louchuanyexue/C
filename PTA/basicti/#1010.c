// #include<stdio.h>
// int main()
// {
//     int m,n,x;
//     int num = 0;
//     int a[1010] = {0};
//     int b[1010] = {0};
//     while(scanf("%d %d",&m,&n) != EOF){
//         if(n<0){
//             x = n*(-1);
//             b[x] = m;
//         }
//         else a[n] = m;   
//     }
//     a[0] = 0;
//     for(int i=1;i<=1000;i++){
//         if(a[i] != 0){
//             a[i-1] = a[i]*i;
//             a[i]=0;
//             if(a[i-1]!=0)num++;
//         }
//     }
//     for(int i=1000;i>=1;i--){
//         if(b[i]!=0){
//             b[i]=b[i-1]*(i-1)*(-1);
//             b[i-1]=0;
//         }
//         if(b[i]!=0)num++;
//     }
//     if(num==0)printf("0 0");
//     else{
//     for(int j=1000;j>=0;j--){
//         if(a[j] != 0)
//         {
//             printf("%d %d",a[j],j);
//             num--;
//             if(num!=0)printf(" ");
//         }
//     }
//     for(int j=1;j<=1000;j++){
//         if(b[j] !=0){
//             printf("%d %d",b[j],j*(-1));
//             num--;
//             if(num!=0)printf(" ");
//         }
//     }
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int m,n;
    int flag=0;
    while(scanf("%d %d",&m,&n)==2){
        if(n*m!=0){
            if(flag)printf(" ");
            else flag=1;
            printf("%d %d",m*n,n-1);
        }
    }
    if(flag==0)printf("0 0");
    return 0;
}