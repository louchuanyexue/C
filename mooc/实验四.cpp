#include <stdio.h> 
#include <time.h>
#include <stdlib.h>  

typedef struct Node_def{
    int data;
    struct Node_def * p_next;

}Node;

void printout(Node* head){
        Node *q = head->p_next;
        while (q){
            printf("%d ", q->data);
            q = q->p_next;
        }
        printf("\n");
}

int main(){
    int n, i,key, count = 0;
    Node head;
    Node* p, *q;
    p = q = &head;
    srand((unsigned)time(NULL));
    printf("input the length:");
    scanf("%d", &n);


    for (i=0; i<n; i++){
        p = (Node*)malloc(sizeof(Node));
        p->data = rand()%100;
        p->p_next = NULL;
        q->p_next = p;
        q = p;
    }

    printout(&head);

    puts("enter a key:");
    scanf("%d", &key);
    q = head.p_next;
    while(q){
        if (key == q->data) count++;
        q=q->p_next;
    }

    printf("The data value %d occure %d times.\n", key, count);
    return 0;
}
