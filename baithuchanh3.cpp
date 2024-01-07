#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

struct Stack {
    int data[MAXSIZE];
    int top;
};

void init(struct Stack *S) {
    S->top = -1;
}

int isEmpty(struct Stack *S) {
    return (S->top == -1);
}

int isFull(struct Stack *S) {
    return (S->top == MAXSIZE - 1);
}

void push(struct Stack *S, int x) {
    if (isFull(S)) {
        printf("Ngan xep day, khong the them phan tu moi.\n");
        return;
    }
    S->top++;
    S->data[S->top] = x;
}

void pop(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong, khong the xoa phan tu.\n");
        return;
    }
    S->top--;
}

void nhapStack(struct Stack *S) {
    int n, x;
    printf("Nhap so luong phan tu can them vao ngan xep: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &x);
        push(S, x);
    }
}

void inStack(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong.\n");
        return;
    }
    printf("Danh sach phan tu trong ngan xep:\n");
    for (int i = 0; i <= S->top; i++) {
        printf("%d ", S->data[i]);
    }
    printf("\n");
}

int peek(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong, khong co phan tu de lay ra.\n");
        return -1;
    }
    return S->data[S->top];
}

void hehai(int hemuoi) {
    struct Stack hehaiStack;
    init(&hehaiStack);

    while (hemuoi > 0) {
        push(&hehaiStack, hemuoi % 2);
        hemuoi /= 2;
    }

    printf("So nhi phan: ");
    while (!isEmpty(&hehaiStack)) {
        printf("%d", peek(&hehaiStack));
        pop(&hehaiStack);
    }
    printf("\n");
}

void hetam(int hemuoi) {
    struct Stack hetamStack;
    init(&hetamStack);

    while (hemuoi > 0) {
        push(&hetamStack, hemuoi % 8);
        hemuoi /= 8;
    }

    printf("So bat phan: ");
    while (!isEmpty(&hetamStack)) {
        printf("%d", peek(&hetamStack));
        pop(&hetamStack);
    }
    printf("\n");
}

void hemuoisau(int hemuoi) {
    struct Stack hemuoisauStack;
    init(&hemuoisauStack);

    while (hemuoi > 0) {
        int phandu = hemuoi % 16;
        if (phandu < 10) {
            push(&hemuoisauStack, phandu);
        } else {
            push(&hemuoisauStack, phandu - 10 + 'A');
        }
        hemuoi /= 16;
    }

    printf("So hex: ");
    while (!isEmpty(&hemuoisauStack)) {
        printf("%c", peek(&hemuoisauStack));
        pop(&hemuoisauStack);
    }
    printf("\n");
}

void themcuoi(struct Stack *S, int x) {
    struct Stack M;
    init(&M);

    while (!isEmpty(S)) {
        push(&M, peek(S));
        pop(S);
    }
    push(S, x);

    while (!isEmpty(&M)) {
        push(S, peek(&M));
        pop(&M);
    }
}

void themxvaok(struct Stack *S, int x, int k) {
    if (k < 1 || k > S->top + 2) {
        printf("Vi tri k khong hop le.\n");
        return;
    }

    struct Stack temp;
    init(&temp);

    for (int i = 1; i < k; i++) {
        push(&temp, peek(S));
        pop(S);
    }

    push(S, x);

    while (!isEmpty(&temp)) {
        push(S, peek(&temp));
        pop(&temp);
    }
}

void xoaday(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong, khong co phan tu de xoa.\n");
        return;
    }

    struct Stack temp;
    init(&temp);
    while (S->top > 0) {
        push(&temp, peek(S));
        pop(S);
    }
    pop(S);
    while (!isEmpty(&temp)) {
        push(S, peek(&temp));
        pop(&temp);
    }
}

void xoavitrik(struct Stack *S, int k) {
    if (k < 1 || k > S->top + 1) {
        printf("Vi tri k khong hop le.\n");
        return;
    }

    struct Stack temp;
    init(&temp);
    for (int i = 1; i < k; i++) {
        push(&temp, peek(S));
        pop(S);
    }
    pop(S);
    while (!isEmpty(&temp)) {
        push(S, peek(&temp));
        pop(&temp);
    }
}

int main() {
    struct Stack S;
    init(&S);

    nhapStack(&S);
    inStack(&S);
//    printf("Xoa phan tu o dinh ngan xep.\n");
//    pop(&S);
//    inStack(&S);

//    int hemuoi;
//    printf("Nhap mot so nguyen he 10: ");
//    scanf("%d", &hemuoi);
//
//    hehai(hemuoi);
//    hetam(hemuoi);
//    hemuoisau(hemuoi);

    int x, k;
//    printf("Nhap gia tri x can them vao day ngan xep: ");
//    scanf("%d", &x);
//    themcuoi(&S, x);
//    printf("Ngan xep sau khi them %d vao day:\n", x);
//    inStack(&S);
//    printf("Nhap gia tri x can them vao vi tri k tinh tu dinh: ");
//    scanf("%d", &x);
//    printf("Nhap vi tri k: ");
//    scanf("%d", &k);
//    themxvaok(&S, x, k);
//    printf("Ngan xep sau khi them %d vao vi tri thu %d tinh tu dinh:\n", x, k);
//    inStack(&S);
//    xoaday(&S);
//    printf("Ngan xep sau khi xoa phan tu o day:\n");
//    inStack(&S);
    printf("Nhap vi tri k can xoa tinh tu dinh: ");
    scanf("%d", &k);
    xoavitrik(&S, k);
    printf("Ngan xep sau khi xoa phan tu o vi tri thu %d tinh tu dinh:\n", k);
    inStack(&S);

    return 0;
}

