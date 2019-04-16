#include<stdio.h>
#include<stdlib.h>
typedef  struct node* list;
struct node{
    int coe;
    int exp;
    list next;
};
void attach(int c,int e,list *prear)
{
    list p;
    p= (list)malloc(sizeof(struct node));
    p->coe=c;
    p->exp=e;
    p->next=NULL;
    (*prear)->next=p;
    (*prear)=p;
}
list listread()
{
    list p,t,rear;
    p=(list)malloc(sizeof(struct node));
    p->next=NULL;
    rear=p;
    int c,e,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&c,&e);
        attach(c,e,&rear);
    }
    t=p;
    p=p->next;
    free(t); 
    return p;  
}
list listadd(list p1,list p2)
{
    list p,t1,t2,rear;
    p=(list)malloc(sizeof(struct node));
    p->next=NULL;
    t1=p1;
    t2=p2;
    rear=p;
    while(t1&&t2){
        if(t1->exp==t2->exp){
            int temp=(t1->coe) + (t2->coe);
            if(temp)attach(temp,t1->exp,&rear);
            t1=t1->next;
            t2=t2->next;
        }
        else if(t1->exp>t2->exp){
            attach(t1->coe,t1->exp,&rear);
            t1=t1->next;
        }
        else{
            attach(t2->coe,t2->exp,&rear);
            t2=t2->next;
        }
    }
    while(t1){
        attach(t1->coe,t1->exp,&rear);
        t1=t1->next;
    }
    while(t2){
        attach(t2->coe,t2->exp,&rear);
        t2=t2->next;
    }
    t1=p;
    p=p->next;
    free(t1);
    free(t2);
    return p;
}
list listmul(list p1,list p2)
{
    list t1,t2,p,rear,t;
    int c,e;

    if(!p1||!p2)return NULL;

    t1=p1;
    t2=p2;
    p=(list)malloc(sizeof(struct node));
    p->next=NULL;
    rear=p;
    while(t2){
        attach(t1->coe*t2->coe,t1->exp+t2->exp,&rear);
        t2=t2->next;
    }
    t1=t1->next;
    while(t1){
        t2=p2;rear=p;
        while(t2){
            e=t1->exp+t2->exp;
            c=t1->coe*t2->coe;
            while(rear->next&&rear->next->exp>e)
                rear = rear->next;
            if(rear->next&&rear->next->exp==e){
                if(rear->next->coe+c)
                    rear->next->coe+=c;
                else{
                    t=rear->next;
                    rear->next=t->next;
                    free(t);
                }
            }
            else{
                t=(list)malloc(sizeof(struct node));
                t->coe=c;
                t->exp=e;
                t->next=rear->next;
                rear->next=t;
                rear=rear->next;
            }
            t2=t2->next;
        }
        t1 = t1->next;
    }
    t2=p;
    p=p->next;
    free(t2);
    return p;
}
void listprint(list p)
{
    int flag=0;
    if(!p){printf("0 0");return;}
    while(p){
        if(!flag)
            flag=1;
        else
            printf(" ");
        printf("%d %d",p->coe,p->exp);
        p=p->next;
    }
}
int main()
{
    list p1,p2,pm,ps;
    p1=listread();
    p2=listread();
    pm=listmul(p1,p2);
    ps=listadd(p1,p2);
    listprint(pm);
    printf("\n");
    listprint(ps);
    return 0;  
}