#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
typedef struct node* List;
struct node{
    int data[maxsize];
    int length;
};
List createlist(int n){
    List s;
    s = (List)malloc(sizeof(struct node));
    s->length = n;
    for(int i=1;i<n+1;i++){
        scanf("%d",&s->data[i]);
    }
    return s;
}
int search(int num,List s){
    s->data[0] = num;
    int i;
    for(i = s->length;s->data[i] != num;i--);
    return i;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    List s = createlist(m);
    printf("%d",search(n,s));
    return 0;
}
