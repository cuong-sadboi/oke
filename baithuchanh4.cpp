#include<stdio.h>

#define n 100

typedef struct Queue{
	int elem[n];
	int count;
	int front, rear;
}Queue;

void init(Queue *Q){
	Q->count=0;
	Q->front=0;
	Q->rear= -1;
}
int isEmpty(Queue *Q){
	return (Q->count==0);
}

int isFull(Queue *Q){
	return (Q->count == n);
}

void enQueue(Queue *Q, int x) {
    if (isFull(Q)) {
        printf("Hang doi day, khong the them phan tu moi.\n");
        return;
    }
    Q->rear = (Q->rear +1)%n;
    Q->elem[Q->rear] = x;
    Q->count++;
}

void deQueue(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa phan tu.\n");
        return;
    }
    int x = Q->elem[Q->front];
    Q->front = (Q->front + 1) % n;
    Q->count--;
}

void input(Queue *Q) {
    int m, item;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &item);
        enQueue(Q, item);
    }
}

void display(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong.\n");
        return;
    }
    printf("Du lieu trong hang doi: ");
    int i = Q->front;
    for(int j=0;j<Q->count;j++){
    	printf("%d ",Q->elem[i]);
    	i = (i+1)%n;
	} 
    printf("\n");
}

void themvaodau(Queue *Q, int x) {
    if (isFull(Q)) {
        printf("Hang doi day, khong the them pha tu moi.\n");
        return;
    }
    Queue tempQ;
    init(&tempQ);
    while (!isEmpty(Q)) {
        int item = Q->elem[Q->front];
        deQueue(Q);
        enQueue(&tempQ, item);
    }
    enQueue(Q, x);
    while (!isEmpty(&tempQ)) {
        int item = tempQ.elem[tempQ.front];
        deQueue(&tempQ);
        enQueue(Q, item);
    }
}

void themxvaok(Queue *Q, int x, int k) {
    if (isFull(Q) || k < 1 || k > Q->count + 1) {
        printf("Vi tri khong hop le hoac hang doi day.\n");
        return;
    }

    Queue tempQ;
    init(&tempQ);
    for (int i = 1; i < k; i++) {
        int item = Q->elem[Q->front];
        deQueue(Q);
        enQueue(&tempQ, item);
    }

    enQueue(Q, x);
    while (!isEmpty(&tempQ)) {
        int item = tempQ.elem[tempQ.front];
        deQueue(&tempQ);
        enQueue(Q, item);
    }
}

void xoacuoi(Queue *Q) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa phan tu.\n");
        return;
    }
    int item = Q->elem[Q->rear];
    Q->rear=(Q->rear -1 +n)%n;
    Q->count--;
}

void xoavitrik(Queue *Q, int k) {
    if (isEmpty(Q)) {
        printf("Hang doi rong, khong the xoa phan tu.\n");
        return;
    }
    if (k < 1 || k > Q->count) {
        printf("Vi tri k khong hop le.\n");
        return;
    }

    Queue tempQ;
    init(&tempQ);
    for (int i = 1; i < k; i++) {
        int item = Q->elem[Q->front];
        deQueue(Q);
        enQueue(&tempQ, item);
    }
    deQueue(Q);
    while (!isEmpty(&tempQ)) {
        int item = tempQ.elem[tempQ.front];
        deQueue(&tempQ);
        enQueue(Q, item);
    }
}

int main(){
	Queue Q;
	init(&Q);
	input(&Q);
	printf("Hang doi ban dau: \n");
	display(&Q);
	int x;
	//printf("Nhap phan tu muon them vao: ");
	//scanf("%d",&x);
	int k;
	printf("Nhap vi tri muon xoa: ");
	scanf("%d",&k);
	//themvaodau(&Q,x);
	//printf("Hang doi sau khi them %d vao dau:\n",x);
	//themxvaok(&Q,x,k);
	//printf("Hang doi sau khi them %d vao vi tri %d: \n",x,k);
	//xoacuoi(&Q);
	//printf("Hang doi sau khi xoa phan tu cuoi: \n");
	xoavitrik(&Q,k);
	printf("Hang doi sau khi xoa vi tri %d:\n",k);
	display(&Q);
	return 0;
}

