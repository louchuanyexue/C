#include <stdio.h>
#define List_Size 100
#define ListIncrement 10
typedef int ElemType;
typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;
void InitSqList(SqList &L){
	L.elem = new ElemType[List_Size];
	L.length = 0;
	L.listsize = List_Size;
}
void CreatSqList(SqList &L,int n){
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&L.elem[i]);
		L.length++;
	}	
}
void DispSqList(SqList L){
	
	int i;
	for(i=0;i<L.length;i++)printf("%d",L.elem[i]);
	printf("\\n");
}
int main()
{
	InitSqList();
	CreatSqList(10);
	DispSqList();
	return 0;
}
 
