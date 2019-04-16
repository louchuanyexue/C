#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    int left,right,mid;
    left = 0;
    right =n-1;
    int i = -1; 
    while(left <= right){
        mid = (left+right)/2;
        if(m > num[mid]){
            left = mid + 1;
        }
        else if(m = num[mid]){
            printf("%d",mid);
            return 0;
        }
        else{
            right = mid -1;
        }
    }
    return 0;
}