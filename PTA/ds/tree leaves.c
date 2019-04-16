#include<stdio.h>

#define MaxTree 10
#define ElementType int
#define Tree int
#define Null 0
#define BinTree 
#define MaxSize 20

struct QNode{
	ElementType Data[MaxSize];
	int rear;
	int front;
};
typedef struct QNode* Queue;

void AddQ(Queue PtrQ,ElementType item){
	PtrQ->rear=(PtrQ->rear+1)%MaxSize;
	PtrQ->Data[PtrQ->rear] = item;
}

ElementType DeleteQ(Queue PtrQ){
	PtrQ->front = (PtrQ->front+1)%MaxSize;
	return PtrQ->Data[PtrQ->front];
}
struct TreeNode{
	ElementType Element;
	Tree Left;
	Tree Right;
}T[MaxTree];

Tree BuildTree(struct TreeNode T[])
{
	int i,N,Root;
	char cr,cl;
	scanf("%d\n",&N);
	int check[N];
	for(i=0;i<N;i++)check[i]=0;
	if(N){
		for(i=0;i<N;i++){
			T[i].Element=i;
			scanf("%c %c\n",&cl,&cr);
			if(cl!='-'){
				T[i].Left=cl-'0';
				check[T[i].Left]=1;
			}
			else T[i].Left=Null;
			if(cr!='-'){
				T[i].Right=cr-'0';
				check[T[i].Right]=1;
			}
			else T[i].Right=Null;
			}
			for(i=0;i<N;i++){
				if(!check[i]){
					Root=i;
					break;
				}
			}
		}
	/*for(i=0;i<N-1;i++){
		if((T[i].Left==Null)&&(T[i].Right==Null)){
				printf("%d ",T[i].Element);
	}}
	if((T[N-1].Left==Null)&&(T[N-1].Right==Null)){
				printf("%d",T[N-1].Element);}
	
	/*for(i=0;i<N;i++){
		if(check[i]==0){
			printf("%d ",i);
		}
	}*/
	return Root;
}
void TravelTree(Tree BT){
	Queue Q; Tree BT;
	if(!BT)return;
	Q = CreatQueue(MaxSize);
	AddQ(Q,BT);
	while(!IsEmptyQ(Q)){
		T=DeleteQ(Q);
		printf("%d\n",T->Element);
		if(T->Left) AddQ(Q,T->Left);
		if(T->Right) AddQ(Q,T->Right);
	}
}

void PrintLeaves(){
	
}

int main(){
	Tree R1;
	int N;
	R1 = BuildTree(T);
	TravelTree();
	return 0;
} 
