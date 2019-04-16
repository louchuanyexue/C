#include<stdio.h>
#include<stdlib.h>

typedef struct Node {  //c语言栈基本结构的构造
    int *Data;
    int Top;
    int MaxSize;
}*Stack;

int M, N, K;  //全局变量，放在栈结构后，方便子函数使用

Stack CreateStack(int MaxSize) {
    Stack S = (Stack)malloc(sizeof(struct Node));
    S->Data = (int *)malloc(MaxSize * sizeof(int));
    S->Top = -1;
    S->MaxSize = MaxSize;
    return S;
}

void Push(Stack S, int ele) {
    if (S->Top == S->MaxSize) {  //短路写法，遇错就返回，提高程序可读性
        printf("FULL\n");
        return;
    }
    S->Data[++(S->Top)] = ele;
}

void Pop(Stack S) {
    if (S->Top == -1) {
        printf("Empty\n");
        return;
    }
    S->Top--;
}

int top(Stack S) {  //返回栈顶元素
    return S->Data[S->Top];
}

int StackCheck(int *v,Stack S) {  //检查输出序列是否为容量为M的栈输出序列
    int idx = 0;  //数组v的指标，指向下一个将要出栈的元素
    int num = 1;  //按顺序进栈的元素，进栈自动加1
    S->Top = -1;
    while (idx != N) {
        while (S->Top != -1 && top(S)<v[idx]&&S->Top+1<M||S->Top==-1&&idx!=N) {
            Push(S, num++);  //若栈非空且栈顶元素小于将要比较的出栈元素或者栈为空且idx未滑至N(即出栈序列未比较完成）
        }
        if (S->Top!=-1&&top(S) == v[idx]) {  //栈非空且栈顶元素值等于将要比较的出栈元素
            Pop(S);
            idx++;
        }
        if (S->Top != -1&&top(S)>v[idx]|| S->Top + 1 == M&&top(S) != v[idx]) {  //栈非空且栈顶元素大于将要比较的出栈元素或栈满但栈顶元素仍小于将要比较的出栈元素
            return 0;  //直接返回，使程序更易理解
        }
    }

    return 1;
}

int main() {
    int i, j;
    Stack S;

    scanf("%d %d %d", &M, &N, &K);
    int *v = (int *)malloc(N * sizeof(int));
    S = CreateStack(M);
    for (i = 0;i < K;i++) {
        for (j = 0;j < N;j++) {
            scanf("%d", v + j);
        }
        if (StackCheck(v, S))
            printf("YES\n");
        else
            printf("NO\n");
    }

}