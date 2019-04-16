#include<stdlib.h>
#include<stdio.h>
typedef struct node* list;
struct node{
    int adr;
    int data;
    int next;
    list link;
};
list Listread(int n)
{
    list p,t,l;
    l=(list)malloc(sizeof(struct node));
    l->link=NULL;
    p=l;
    while(n--){
        t = (list)malloc(sizeof(struct node));
        scanf("%d %d %d",&t->adr,&t->data,&t->next);
        p->link=t;
        p=t;
    }
    p->link=NULL;
    return l;
}
list sortlist(list p,int ad)
{
    list l2,p2,q3;
    l2 = (list)malloc(sizeof(struct node));
    l2->link=NULL;
    int cnt=0;
    int findadr=ad;
    p2=l2;
    while(findadr != -1){
        q3=p;
        while(q3->link){
                if(q3->link->adr == findadr){
                p2->link=q3->link;
                q3->link=q3->link->link;//?
                p2=p2->link;
                cnt++;
                findadr=p2->next;
            }else{
                q3=q3->link;
            }
        }
    }
    p2->link=NULL;
    return l2;
}
list Reverselist(list p,int k)
{
    int cnt = 1;
    list l3,p3,q3,tmp;
    l3 = p->link;
    p3 = l3->link;
    while(cnt<k){
        tmp = p3->link;
        p3->link = l3;
        l3=p3;
        p3=tmp;
        cnt++;
    }
    p->link->link = p3;
    return l3;

}
void Printlist(list p)
{
    list t=p;
    while(t->link){
        if(t->next != -1)
            printf("%05d %d %05d\n",t->adr,t->data,t->next);
        else
            printf("%05d %d -1\n",t->adr,t->data);
        t=t->link;
    }
    if(t->next != -1)
        printf("%05d %d %05d\n",t->adr,t->data,t->next);
    else
        printf("%05d %d -1\n",t->adr,t->data);
    
}
int main()
{
    int ad,n,k;
    list p,s,r;
    scanf("%d %d %d",&ad,&n,&k);
    p=Listread(n);
    s=sortlist(p,ad);
    r=Reverselist(s,k);
    Printlist(r);
    return 0;
}