#include <stdio.h>
#include <string.h>
#define max 50

typedef struct SV {
    char MaSv[10];
    char HoTen[50];
    int NamSinh;
    char Lop[10];
    float DiemTB;
};

typedef struct List{
    struct SV elems[max];
    int size;
};

void init(struct List *L) {
    L->size = 0;
}

void nhapList(struct List *L) {
    int n, i;
    printf("Nhap so luong sinh vien (n <= %d): ", max);
    scanf("%d", &n);

    if (n <= 0 || n > max) {
        printf("So luong sinh vien khong hop le!\n");
        return;
    }
    getchar();
    printf("Nhap thong tin cho %d sinh vien:\n", n);
    for (i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ma SV: ");
        gets(L->elems[i].MaSv);
        printf("Ho Ten: ");
        gets(L->elems[i].HoTen);
        printf("Nam Sinh: ");
        scanf("%d", &L->elems[i].NamSinh);
        getchar();
        printf("Lop: ");
        gets(L->elems[i].Lop);
        printf("Diem TB: ");
        scanf("%f", &L->elems[i].DiemTB);
        getchar();
	}
    L->size = n;
}

void inList(struct List L) {
    int i;
    printf("%-10s%-20s%-10s%-10s%-10s\n", "Ma SV", "Ho Ten", "Nam Sinh", "Lop", "Diem TB");
    for (i = 0; i < L.size; i++) {
        printf("%-10s%-20s%-10d%-10s%-10.2f\n", L.elems[i].MaSv, L.elems[i].HoTen, L.elems[i].NamSinh, L.elems[i].Lop, L.elems[i].DiemTB);
    }
}

void themSV(struct List *L, struct SV SVmoi, int k) {
    int i;

    if (L->size >= max) {
        printf("Danh sach da day, khong the them sinh vien moi!\n");
        return;
    }

    if (k < 0 || k > L->size) {
        printf("Vi tri chen khong hop le!\n");
        return;
    }

    for (i = L->size; i > k-1; i--) {
        L->elems[i] = L->elems[i - 1];
    }
    L->elems[k-1] = SVmoi;
    L->size++;
}

void themSVvaok(struct List *L) {
    struct SV SVmoi;
    int k;

    printf("Nhap thong tin sinh vien can them:\n");
    printf("Ma SV: ");
    gets(SVmoi.MaSv);
    printf("Ho Ten: ");
    gets(SVmoi.HoTen);
    printf("Nam Sinh: ");
    scanf("%d", &SVmoi.NamSinh);
    getchar();
    printf("Lop: ");
    gets(SVmoi.Lop);
    printf("Diem TB: ");
    scanf("%f", &SVmoi.DiemTB);
    getchar();
    printf("Nhap vi tri chen: ");
    scanf("%d", &k);
    themSV(L, SVmoi, k);
    printf("Danh sach sau khi chen:\n");
    inList(*L);
}

void xoavitrik(struct List *L,int k){
	printf("Vi tri xoa: ");
	scanf("%d",&k);
	if(k<0 || k >= L->size){
		printf("Vi tri xoa khong hop le!\n");
		return;
	}
	for(int i=k-1;i<L->size-1;i++){
		L->elems[i] = L->elems[i+1];
	}
	L->size--;
	printf("Danh sach sau khi xoa: \n");
	inList(*L); 
}

int timdautien(struct List *L,char *ten){
	for(int i=0;i<L->size;i++){
		if(strcmp(L->elems[i].HoTen, ten) == 0){
			return i+1;
		}
	}
	return -1;
} 

int timcuoicung(struct List *L,char *ten){
	int cuoicung = -1;
	for(int i=0;i<L->size;i++){
		if(strcmp(L->elems[i].HoTen, ten) == 0){
			cuoicung = i+1;
		}
	}
	return cuoicung;
}

void timtatca(struct List *L,char *ten){
	int dem = 0; 
	printf("Tim thay sinh vien co ten %s o vi tri thu: ",ten);
	for (int i = 0; i < L->size; i++){
	    if (strcmp(L->elems[i].HoTen, ten) == 0) {
            printf("%d ", i+1);
	        dem++; 
	    }
    } if(dem == 0){
	        printf("Khong tim thay sinh vien co ten %c\n", ten);
	}
}

/*void timkiem(struct List *L,char *ten){
	printf("Nhap ten sinh vien can tim: ");
    scanf(" %[^\n]s",ten);
    int vitridt = timdautien(&L,ten);
	if(vitridt != -1){
		printf("Vi tri dau tien tim thay la: %d\n",vitridt);
	}
	int vitricc = timcuoicung(&L,ten);
	if(vitricc != -1){
		printf("Vi tri cuoi cung tim thay la: %d\n",vitricc);
	}
	timtatca(&L,ten);
}*/

void demsvtren55(struct List *L){
	int dem=0;
	for(int i=0;i<L->size;i++){
		if(L->elems[i].DiemTB > 5.5){
			dem++;
		}
	}
	printf("So sinh vien co dtb tren 5.5 la: %d\n",dem);
}

void tachsvtheolop(struct List L, struct List Llop[]){
	int dem=0;
	for(int i=0;i<L.size;i++){
		int tim =0;
		for(int j=0;j<dem;j++){
			if(strcmp(Llop[j].elems[0].Lop, L.elems[i].Lop)==0){
				Llop[j].elems[Llop[j].size] = L.elems[i];
				Llop[j].size++;
				tim =1;
				break;
			}
		}
		if(!tim){
			init(&Llop[dem]);
			Llop[dem].elems[0] = L.elems[i];
			Llop[dem].size++;
			dem++;
		}
	}
}

int main() {
    struct List L;
    int k;
    char ten[50];
    init(&L);
    nhapList(&L);
    inList(L);
    themSVvaok(&L);
    //xoavitrik(&L,k);
    //timkiem(&L,ten);
//    printf("Nhap ten sinh vien can tim: ");
//    scanf(" %[^\n]s",ten);
//    int vitridt = timdautien(&L,ten);
//	if(vitridt != -1){
//		printf("Vi tri dau tien tim thay la: %d\n",vitridt);
//	}
//	int vitricc = timcuoicung(&L,ten);
//	if(vitricc != -1){
//		printf("Vi tri cuoi cung tim thay la: %d\n",vitricc);
//	}
//	timtatca(&L,ten);
    //demsvtren55(&L);
/*	struct List Llop[50];
	for(int i=0;i<50;i++){
		init(&Llop[i]);
	}
	tachsvtheolop(L,Llop);
	printf("\nDanh sach sinh vien theo tung lop:\n");
    for (int i = 0; i < Llop->size; i++) {
        printf("\nLop %s:\n", Llop[i].elems[0].Lop);
        inList(Llop[i]);
    } */
	return 0;
}

