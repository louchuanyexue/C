#include<cstdio>
#include<cstring>
int main()
{
    int n,n1,n2,n3,q,b,s,g,flag=0;
    char z[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char z1[5][5]={"Qian","Bai","Shi"};
    scanf("%d",&n);
    n1 = n/10000;
    n2 = n1/10000;
    n3 = n%10000;
    if(n<0)printf("FU ");
    if(n2!=0){
        printf("%s ",z[n2]);
        printf("Yi ");
        flag=1;
    }
    if(n1!=0){
        q = n1%10000/1000;
        b = n1%1000/100;
        s = n1%100/10;
        g = n1%10;
        if(q!=0){
            printf("%s ",z[q]);
            printf("Qian ");
            flag=1;
        }
        else if(flag==1){
            printf("ling ");
            flag=0;
        }
        if(b!=0){
            printf("%s ",z[b]);
            printf("Bai ");
            flag=1;
        }
        else if(flag==1){
            printf("ling ");
            flag=0;
        }
        if(s!=0){
            printf("%s ",z[s]);
            printf("Shi ");
            flag=1;
        }
        else if(flag==1){
            printf("ling ");
            flag=0;
        }
        if(g!=0){
            printf("%s ",z[g]);
            flag=1;
        }
        if(q!=0)printf("Wan ");//**
    }
    if(n3!=0){
        q = n3/1000;
        b = n3%1000/100;
        s = n3%100/10;
        g = n3%10;
        if(q!=0){
            printf("%s ",z[q]);
            printf("Qian ");
            flag=1;
        }
        else if(flag==1){
            printf("ling ");
            flag=0;
        }
        if(b!=0){
            printf("%s ",z[b]);
            printf("Bai ");
            flag=1;
        }
        else if(flag==1){
            printf("ling ");
            flag=0;
        }
        if(s!=0){
            printf("%s ",z[s]);
            printf("Shi ");
            flag=1;
        }
        else if(flag==1&&g!=0){
            printf("ling ");
            flag=0;
        }
        if(g!=0){
            printf("%s ",z[g]);
        }
    }
    return 0;
}