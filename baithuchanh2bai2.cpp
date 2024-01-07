#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

typedef struct SV {
    char MaSv[10];
    char HoTen[50];
    int NamSinh;
    char Lop[10];
    float DiemTB;
}SV;

typedef struct Node{
	SV *data;
	struct Node *next;
}Node;

typedef struct List{
    Node *dau;
    int soluong;
}List;

void init(List *L){
	L->soluong=0;
	L->dau = NULL;
}


SV *taoSV() {
    SV *sv = (SV *)malloc(sizeof(SV));
    if (sv == NULL) {
        printf("Loi: Khong the cap phat bo nho cho sinh vien moi.\n");
        exit(1);
    }

    printf("Ma SV: ");
    scanf("%s", sv->MaSv);
    printf("Ho Ten: ");
    scanf(" %[^\n]", sv->HoTen);
    printf("Nam Sinh: ");
    scanf("%d", &sv->NamSinh);
    printf("Lop: ");
    scanf("%s", sv->Lop);
    printf("Diem TB: ");
    scanf("%f", &sv->DiemTB);

    return sv;
}

Node *Make_Node(SV *x) {
    Node *P = (Node *)malloc(sizeof(Node));
    P->data = x;
    P->next = NULL;
    return P;
}

void themSinhVienVaoDS(List *L, SV *sv) {
    Node *M = Make_Node(sv);

    if (L->dau == NULL) {
        L->dau = M;
    } else {
        Node *current = L->dau;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = M;
    }

    L->soluong++;
}

void inList(List *L) {
    if (L->soluong == 0) {
        printf("Danh sach rong.\n");
        return;
    }

    printf("%-10s%-20s%-10s%-10s%-10s\n", "Ma SV", "Ho Ten", "Nam Sinh", "Lop", "Diem TB");

    Node *current = L->dau;
    while (current != NULL) {
        SV *sv = current->data;
        printf("%-10s%-20s%-10d%-10s%-10.2f\n", sv->MaSv, sv->HoTen, sv->NamSinh, sv->Lop, sv->DiemTB);
        current = current->next;
    }
}

void themDauDS(List *L, SV *sv) {
    Node *M = Make_Node(sv);

    if (L->dau == NULL) {
        L->dau = M;
    } else {
        M->next = L->dau;
        L->dau = M;
    }

    L->soluong++;
}

void themCuoiDS(List *L, SV *sv) {
    Node *M = Make_Node(sv);

    if (L->dau == NULL) {
        L->dau = M;
    } else {
        Node *current = L->dau;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = M;
    }

    L->soluong++;
}

void themVaoK(List *L, SV *sv, int k) {
    if (k < 1 || k > L->soluong + 1) {
        printf("Vi tri them khong hop le.\n");
        return;
    }

    Node *newNode = Make_Node(sv);

    if (k == 1) {
        newNode->next = L->dau;
        L->dau = newNode;
    } else {
        Node *current = L->dau;
        int i;
        for (i = 1; i < k - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    L->soluong++;
}


void xoadau(struct List *L) {
    if (L->soluong == 0) {
        printf("Danh sach rong, khong the xoa!\n");
        return;
    }

    Node *temp = L->dau;
    L->dau = L->dau->next;
    free(temp->data);
    free(temp);

    L->soluong--;
    printf("Danh sach sau khi xoa dau:\n");
}

void xoacuoi(struct List *L) {
    if (L->soluong == 0) {
        printf("Danh sach rong, khong the xoa!\n");
        return;
    }

    if (L->soluong == 1) {
        free(L->dau->data);
        free(L->dau);
        L->dau = NULL;
    } else {
        Node *current = L->dau;
        while (current->next->next != NULL) {
            current = current->next;
        }
        free(current->next->data);
        free(current->next);
        current->next = NULL;
    }

    L->soluong--;
    printf("Danh sach sau khi xoa cuoi:\n");
}

void xoavitrik(struct List *L, int k) {
    if (k < 1 || k > L->soluong) {
        printf("Vi tri xoa khong hop le!\n");
        return;
    }

    if (k == 1) {
        xoadau(L);
    } else {
        Node *current = L->dau;
        int i;
        for (i = 1; i < k - 1; i++) {
            current = current->next;
        }
        Node *temp = current->next;
        current->next = temp->next;
        free(temp->data);
        free(temp);
    L->soluong--;
    printf("Danh sach sau khi xoa vi tri %d:\n", k);
    }
}

int timSinhVien(List *L, char *ten, int vitri[]) {
    int tim = 0;
    int dem = 0;
    Node *current = L->dau;

    while (current != NULL) {
        SV *sv = current->data;
        if (strcmp(sv->HoTen, ten) == 0) {
            tim = 1;
            vitri[dem++] = L->soluong - L->soluong + 1;
        }
        current = current->next;
    }

    return tim;
}

int dtbhon5_5(List *L, float diemTB) {
    int dem = 0;
    Node *current = L->dau;

    while (current != NULL) {
        SV *sv = current->data;
        if (sv->DiemTB > diemTB) {
            dem++;
        }
        current = current->next;
    }

    return dem;
}

void tachsvtheolop(List *L, List *dsLop[], int *soLuongLop) {
    Node *current = L->dau;

    while (current != NULL) {
        SV *sv = current->data;
        int found = 0;

        for (int i = 0; i < *soLuongLop; i++) {
            if (strcmp(sv->Lop, dsLop[i]->dau->data->Lop) == 0) {
                themCuoiDS(dsLop[i], sv);
                found = 1;
                break;
            }
        }

        if (!found) {
            List *newList = (List *)malloc(sizeof(List));
            init(newList);
            themCuoiDS(newList, sv);
            dsLop[*soLuongLop] = newList;
            (*soLuongLop)++;
        }

        current = current->next;
    }
}


int main(){
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    List L;
    init(&L);
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        SV *M = taoSV();
        themSinhVienVaoDS(&L, M);
    }
    printf("Danh sach sinh vien:\n");
    inList(&L);
//    int k;
//    printf("Nhap k: ");
//    scanf("%d",&k);
    //printf("Nhap thong tin sinh vien muon them vao dau: \n");
    //SV *sv = taoSV();
    //themDauDS(&L, sv);
    //printf("Nhap thong tin sinh vien muon them vao cuoi: \n");
    //SV *svMoi = taoSV();
    //themCuoiDS(&L, svMoi);
//    SV *svMoi = taoSV();
//    themVaoK(&L, svMoi, k); // Thêm vào v? trí th? k
//    printf("Danh sach sau khi them sinh vien:\n");
    
    //xoadau(&L);
    //xoacuoi(&L);
    //xoavitrik(&L,k);
    //inList(&L);
//    char ten[50];
//    printf("Nhap ten sinh vien can tim: ");
//    scanf(" %[^\n]", ten);
//    int vitri[L.soluong];
//    int tim = timSinhVien(&L,ten,vitri);
//    if(tim){
//    	printf("Sinh vien co ten '%s' xuat hien tai cac vi tri sau:\n", ten);
//        for (int i = 0; i < tim; i++) {
//            printf("Vi tri %d\n", vitri[i]);
//        }
//	}else {
//        printf("Khon
//    float diemTB = 5.5; // Ho?c b?t k? giá tr? nào b?n mu?n
//    int slsvtren5_5 = dtbhon5_5(&L, diemTB);
//    printf("So luong sinh vien co DiemTB > %.2f: %d\n", diemTB, slsvtren5_5);
   int soLuongLop = 0;
    List *dsLop[n]; // T?o m?ng danh sách liên k?t cho t?ng l?p

    tachsvtheolop(&L, dsLop, &soLuongLop);

    printf("\nDanh sach sinh vien theo lop:\n");
    for (int i = 0; i < soLuongLop; i++) {
        printf("\nLop: %s\n", dsLop[i]->dau->data->Lop);
        inList(dsLop[i]);
    }

for (int i = 0; i < soLuongLop; i++) {
        Node *current = dsLop[i]->dau;
        while (current != NULL) {
            Node *temp = current;
            current = current->next;
            free(temp->data);
            free(temp);
        }
    }
    Node *current = L.dau;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp->data);
        free(temp);
    }
    
    return 0;
}
