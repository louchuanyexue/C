#include<cstdio>
int main()
{
    char s[1010]={};
    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n0=0;
    scanf("%s",s);
    for(int i=0;i<1010;i++){
        switch (s[i])
        {
        case '0':
            n0++;
            break;
        case '1':
            n1++;
            break;
        case '2':
            n2++;
            break;
        case '3':
            n3++;
            break;
        case '4':
            n4++;
            break;
        case '5':
            n5++;
            break;
        case '6':
            n6++;
            break;
        case '7':
            n7++;
            break;
        case '8':
            n8++;
            break;
        case '9':
            n9++;
            break;
        default:
            break;
        }
    }
    if(n0 != 0)printf("0:%d\n",n0);
    if(n1!=0)printf("1:%d\n",n1);
    if(n2!=0)printf("2:%d\n",n2);
    if(n3!=0)printf("3:%d\n",n3);
    if(n4!=0)printf("4:%d\n",n4);
    if(n5!=0)printf("5:%d\n",n5);
    if(n6!=0)printf("6:%d\n",n6);
    if(n7!=0)printf("7:%d\n",n7);
    if(n8!=0)printf("8:%d\n",n8);
    if(n9!=0)printf("9:%d\n",n9);
    return 0;
}