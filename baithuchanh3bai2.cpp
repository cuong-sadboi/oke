#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct SinhVien {
    char MaSV[20];
    char HoTen[50];
    int NamSinh;
    char Lop[20];
    float DiemTB;
};

struct Stack {
    struct SinhVien data[MAX];
    int top;
};

void init(struct Stack *S) {
    S->top = -1;
}

int isEmpty(struct Stack *S) {
    return S->top == -1;
}

int isFull(struct Stack *S) {
    return S->top == MAX - 1;
}

void Push(struct Stack *S,struct SinhVien sv) {
    if (isFull(S)) {
        printf("Ngan xep da day, khong the them sinh vien.\n");
        return;
    }
    S->data[++S->top]=sv;
}

void Pop(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong, khong the xoa sinh vien.\n");
        return;
    }
    S->top--;
}

void themsvvaoday(struct Stack *S, struct SinhVien sv) {
    if (isFull(S)) {
        printf("Ngan xep da day, khong the them sinh vien vao day.\n");
        return;
    }

    struct Stack tempStack;
    init(&tempStack);

    while (!isEmpty(S)) {
        Push(&tempStack, S->data[S->top]);
        Pop(S);
    }

    Push(S, sv);
    while (!isEmpty(&tempStack)) {
        Push(S, tempStack.data[tempStack.top]);
        Pop(&tempStack);
    }
}

void themsvvaok(struct Stack *S, struct SinhVien sv, int k) {
    if (isFull(S)) {
        printf("Ngan xep da day, khong the them sinh vien vao vi tri %d.\n", k);
        return;
    }

    struct Stack tempStack;
    init(&tempStack);
    while (!isEmpty(S)) {
        Push(&tempStack, S->data[S->top]);
        Pop(S);
    }
    int count = 0;
    while (!isEmpty(&tempStack)) {
        if (count == k) {
            Push(S, sv);
        }
        Push(S, tempStack.data[tempStack.top]);
        Pop(&tempStack);
        count++;
    }
    if (count == k) {
        Push(S, sv);
    }
}

void xoaday(struct Stack *S) {
    if (isEmpty(S)) {
        printf("Ngan xep rong, khong the xoa sinh vien tai day.\n");
        return;
    }
    struct Stack tempStack;
    init(&tempStack);
    while (!isEmpty(S)) {
        Push(&tempStack, S->data[S->top]);
        Pop(S);
    }
    Pop(&tempStack);

    while (!isEmpty(&tempStack)) {
        Push(S, tempStack.data[tempStack.top]);
        Pop(&tempStack);
    }
}

void xoavtk(struct Stack *S, int k) {
    if (isEmpty(S) || k < 1 || k > S->top + 1) {
        printf("Khong the xoa sinh vien tai vi tri %d.\n", k);
        return;
    }
    struct Stack tempStack;
    init(&tempStack);

    while (!isEmpty(S)) {
        Push(&tempStack, S->data[S->top]);
        Pop(S);
    }

    int count = 0;
    while (!isEmpty(&tempStack)) {
        if (count != k - 1) {
            Push(S, tempStack.data[tempStack.top]);
        }
        Pop(&tempStack);
        count++;
    }

    while (!isEmpty(&tempStack)) {
        Push(S, tempStack.data[tempStack.top]);
        Pop(&tempStack);
    }
}

void nhapdanhsach(struct SinhVien *sv) {
    printf("Nhap ma SV: ");
    scanf("%s", sv->MaSV);
    printf("Nhap ho ten: ");
    scanf("%s", sv->HoTen);
    printf("Nhap nam sinh: ");
    scanf("%d", &sv->NamSinh);
    printf("Nhap lop: ");
    scanf("%s", sv->Lop);
    printf("Nhap diem TB: ");
    scanf("%f", &sv->DiemTB);
}

void inStack(struct Stack *S) {
    printf("Danh sach sinh vien trong ngan xep:\n");
    printf("%-10s%-20s%-10s%-10s%-10s\n", "Ma SV", "Ho Ten", "Nam Sinh", "Lop", "Diem TB");
    for (int i = S->top; i >= 0; i--) {
        struct SinhVien sv = S->data[i];
        printf("%-10s%-20s%-10d%-10s%-10.2f\n", sv.MaSV, sv.HoTen, sv.NamSinh, sv.Lop, sv.DiemTB);
    }
}

int main() {
    struct Stack S;
    init(&S);
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct SinhVien sv;
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        nhapdanhsach(&sv);
        Push(&S, sv);
    }
    inStack(&S);
    
//    struct SinhVien sv1;
//    printf("Nhap thong tin cho sinh vien muon them vao day:\n");
//    nhapdanhsach(&sv1);
//    themsvvaoday(&S, sv1);
//    printf("Sau khi them sinh vien vao day:\n");
//    inStack(&S);
//    
//    struct SinhVien svk;
//    int k; 
//    printf("Nhap vi tri muon them sinh vien vao: ");
//    scanf("%d",&k);
//    printf("Nhap thong tin cho sinh vien muon them vao vi tri thu %d: \n",k);
//    nhapdanhsach(&svk);
//    themsvvaok(&S, svk, k);
//    printf("Sau khi them sinh vien vao vi tri thu %d:\n", k);
//    inStack(&S);

    printf("Xoa sinh vien tai day:\n");
    xoaday(&S);
    inStack(&S);

    int k;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d",&k);
    printf("Xoa sinh vien tai vi tri thu %d:\n", k);
    xoavtk(&S, k);
    inStack(&S);
    
    return 0;
}
