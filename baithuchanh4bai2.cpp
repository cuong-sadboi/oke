#include <stdio.h>
#include <stdlib.h>

#define n 100

typedef struct {
    char MaSv[20];
    char HoTen[50];
    int NamSinh;
    char Lop[20];
    float DiemTB;
} SinhVien;

typedef struct {
    SinhVien elem[n];
    int front, rear, count;
} Queue;

void init(Queue *Q) {
    Q->count = 0;
    Q->front = 0;
    Q->rear = -1;
}

int isEmpty(Queue *Q) {
    return (Q->count == 0);
}

int isFull(Queue *Q) {
    return (Q->count == n);
}

void enQueue(Queue *Q, SinhVien sv) {
    if (isFull(Q)) {
        printf("Hang doi day, khong the them sinh vien moi.\n");
        return;
    }
    Q->rear = (Q->rear + 1) % n;
    Q->elem[Q->rear] = sv;
    Q->count++;
}

void deQueue(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa.\n");
        return;
    }
    SinhVien sv = Q->elem[Q->front];
    Q->front = (Q->front + 1) % n;
    Q->count--;
}

SinhVien nhapSinhVien() {
    SinhVien sv;
    printf("Nhap thong tin sinh vien:\n");
    printf("Ma SV: ");
    scanf("%s", sv.MaSv);
    printf("Ho ten: ");
    scanf(" %[^\n]", sv.HoTen);
    printf("Nam sinh: ");
    scanf("%d", &sv.NamSinh);
    printf("Lop: ");
    scanf(" %[^\n]", sv.Lop);
    printf("Diem TB: ");
    scanf("%f", &sv.DiemTB);
    return sv;
}

void display(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong.\n");
        return;
    }
    printf("Du lieu trong hang doi:\n");
    printf("%-10s%-20s%-10s%-10s%-10s\n", "Ma SV", "Ho Ten", "Nam Sinh", "Lop", "Diem TB");
    int i = Q->front;
    for (int j = 0; j <Q->count; j++) {
        SinhVien sv = Q->elem[i];
        printf("%-10s%-20s%-10d%-10s%-10.2f\n", sv.MaSv, sv.HoTen, sv.NamSinh, sv.Lop, sv.DiemTB);
        i = (i + 1) % n;
    }
}

void themdau(Queue *Q, SinhVien sv) {
    if (isFull(Q)) {
        printf("Hang doi day, khong the them sinh vien moi.\n");
        return;
    }
    Queue tempQ;
    init(&tempQ);
    int i = Q->front;
    for (int j = 0; j < Q->count; j++) {
        enQueue(&tempQ, Q->elem[i]);
        i = (i + 1) % n;
    }
    init(Q);
    enQueue(Q, sv);
    i = tempQ.front;
    for (int j = 0; j < tempQ.count; j++) {
        enQueue(Q, tempQ.elem[i]);
        i = (i + 1) % n;
    }
}

void themsvvaok(Queue *Q, SinhVien sv, int k) {
    if (isFull(Q)) {
        printf("Hang doi day, không the them sinh vien moi.\n");
        return;
    }
    if (k < 1 || k > Q->count + 1) {
        printf("Vi tri k khong hop le.\n");
        return;
    }
    Queue tempQ;
    init(&tempQ);
    int i = Q->front;
    for (int j = 0; j < Q->count; j++) {
        if (j == k - 1) {
            enQueue(&tempQ, sv);
        }
        enQueue(&tempQ, Q->elem[i]);
        i = (i + 1) % n;
    }
    if (k == Q->count + 1) {
        enQueue(&tempQ, sv);
    }
    init(Q);
    i = tempQ.front;
    for (int j = 0; j < tempQ.count; j++) {
        enQueue(Q, tempQ.elem[i]);
        i = (i + 1) % n;
    }
}

void xoacuoi(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa sinh vien.\n");
        return;
    }
    Queue tempQ;
    init(&tempQ);
    int i = Q->front;
    for (int j = 0; j < Q->count - 1; j++) {
        enQueue(&tempQ, Q->elem[i]);
        i = (i + 1) % n;
    }
    init(Q);
    i = tempQ.front;
    for (int j = 0; j < tempQ.count; j++) {
        enQueue(Q, tempQ.elem[i]);
        i = (i + 1) % n;
    }
}

void xoasvvtk(Queue *Q, int k) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa sinh vien.\n");
        return;
    }
    if (k < 1 || k > Q->count) {
        printf("Vi tri k khong hop le.\n");
        return;
    }
    Queue tempQ;
    init(&tempQ);
    int i = Q->front;
    for (int j = 0; j < Q->count; j++) {
        if (j != k - 1) {
            enQueue(&tempQ, Q->elem[i]);
        }
        i = (i + 1) % n;
    }
    init(Q);
    i = tempQ.front;
    for (int j = 0; j < tempQ.count; j++) {
        enQueue(Q, tempQ.elem[i]);
        i = (i + 1) % n;
    }
}

int main(){
	Queue Q;
	init(&Q);
	int m;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		printf("Nhap thong tin cho sinh vien thu %d: \n",i+1);
	    SinhVien sv = nhapSinhVien();
		enQueue(&Q,sv);
	}
	printf("Hang doi ban dau:\n");
	display(&Q);
	//deQueue(&Q);
	//printf("Hang doi sau khi xoa sinh vien o dau:\n");
	//printf("Nhap thong tin sv muon them:\n");
	//SinhVien sv1 = nhapSinhVien();
	//themdau(&Q,sv1);
	//printf("Hang doi sau khi them sv vao dau hang:\n");
	int k;
	printf("Nhap vi tri muon xoa: ");
	scanf("%d",&k);
	//themsvvaok(&Q,sv1,k);
	//xoacuoi(&Q);
	//printf("Hang doi sau khi xoa sinh vien o cuoi:\n");
	xoasvvtk(&Q,k);
	printf("Hang doi sau khi xoa sinh vien o vi tri %d:\n",k);
	display(&Q);
	return 0;
}
