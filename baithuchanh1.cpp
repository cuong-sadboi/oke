#include<stdio.h>

#define max 50

typedef struct List{
	int elems[max];
	int size;
};

void init(struct List *L){
	(*L).size = 0;
}

void nhaplist(struct List *L){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<0 || n>max){
		printf("So luong pt ko hop le.\n");
		return;
	}
	printf("Nhap %d phan tu:\n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&(*L).elems[i]);
	}
	(*L).size = n;
}

void inlist(List L){
	printf("Danh sach cac phan tu: ");
	for(int i=0;i<L.size;i++){
		printf("%d ",L.elems[i]);
	}
	printf("\n");
}

int nhapk(int &k){
	printf("Nhap k la: ");
	scanf("%d",&k);
}

int nhapx(int &x){
	printf("Nhap x la: ");
	scanf("%d",&x);
} 

void chenxvaok(int x,int k,struct List *L){
	if(L->size >= max){
		printf("Danh sach day, ko the chen.\n");
		return;
	}
	if(k<1 || k> L->size+1) printf("Khong the chen.\n");
	else{
		for(int i=L->size;i >= k;i--){
			L->elems[i] = L->elems[i-1];
		}
		L->elems[k-1] = x;
		L->size++;
		printf("Mang sau khi chen %d vao vi tri %d la: ",x,k);
		for(int i=0;i< L->size;i++){
			printf("%d ",L->elems[i]);
		}
		printf("\n");
	}
}

void xoaphantuvitrik(int k,struct List *L){
	if(k<1 || k>L->size+1) printf("Khong the xoa.\n");
	else{
		for(int i =k-1;i<L->size;i++){
			L->elems[i] = L->elems[i+1];
		}
		L->size--;
		printf("Mang sau khi xoa 1 phan tu o vi tri %d la: ",k);
		for(int i=0;i<L->size;i++){
			printf("%d ",L->elems[i]);
		}
	}
}

void timvitrix(int x,struct List *L) {
    int timthay = 0;
    for(int i=0;i<L->size;i++){
    	if(L->elems[i] == x){
    		printf("Vi tri dau tien cua %d la: %d\n",x,i);
    		timthay = 1;
    		break;
		}
	}
   
    for(int i=0;i < L->size; i++) {
        if (L->elems[i] == x) {
            timthay = i;
        }
    }
    if (!timthay) {
        printf("Khong tim thay phan tu %d trong danh sach\n", x);
    } else {
    	printf("Vi tri cuoi cung cua %d la: %d\n", x,timthay);
    	printf("Tat ca vi tri tim thay %d la: ",x);
    	for(int i=0;i < L->size; i++) {
            if (L->elems[i] == x) {
                printf("%d ",i);
            }
        }
	}
}

void ptchanleamduong(struct List *L){
	int chan=0,le=0,am=0,duong=0;
	for(int i=0;i<L->size;i++){
		if(L->elems[i] % 2 == 0){
			chan++;
		} else {
			le++;
		}
		if(L->elems[i] > 0){
			duong++;
		} else {
			am++;
		}
	}
	if(chan) printf("So phan tu chan: %d\n",chan);
	else printf("Khong co phan tu chan!\n");
	if(le) printf("So phan tu le: %d\n",le);
	else printf("Khong co phan tu le!\n");
	if(am) printf("So phan tu am: %d\n",am);
	else printf("Khong co phan tu am!\n");
	if(duong) printf("So phan tu duong: %d\n",duong);
	else printf("Khong co phan tu duong!\n");
}

int trungbinham(struct List *L){
	int soptam = 0;
	int tong = 0;
	for(int i =0;i<L->size;i++){
		if(L->elems[i] < 0){
			tong = tong + L->elems[i];
			soptam++;
		}
	}
	float tbc = 0;
	if(soptam > 0){
	    tbc = (float)tong/soptam;
	    printf("Trung binh cua cac phan tu am: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int trungbinhduong(struct List *L){
	int soptduong = 0;
	int tong = 0;
	for(int i =0;i<L->size;i++){
		if(L->elems[i] > 0){
			tong = tong + L->elems[i];
			soptduong++;
		}
	}
	float tbc = 0;
	if(soptduong > 0){
	    tbc = (float)tong/soptduong;
	    printf("Trung binh cua cac phan tu duong: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}
int trungbinhchan(struct List *L){
	int soptchan = 0;
	int tong = 0;
	for(int i =0;i<L->size;i++){
		if(L->elems[i] % 2 == 0){
			tong = tong + L->elems[i];
			soptchan++;
		}
	}
	float tbc = 0;
	if(soptchan > 0){
	    tbc = (float)tong/soptchan;
	    printf("Trung binh cua cac phan tu chan: %g",tbc);
	} else {
		return 0;
	}
    printf("\n");
}	
int trungbinhle(struct List *L){
	int soptle = 0;
	int tong = 0;
	for(int i =0;i<L->size;i++){
		if(L->elems[i] % 2 != 0){
			tong = tong + L->elems[i];
			soptle++;
		}
	}
	float tbc = 0;
	if(soptle > 0){
	    tbc = (float)tong/soptle;
	    printf("Trung binh cua cac phan tu le: %g",tbc);
	} else {
		return 0;
	}
    printf("\n");
}
void tachmangcon(struct List L,struct List *listchan,struct List *listle,struct List *listam,struct List *listduong){
    init(listchan);
    init(listle);
    init(listam);
    init(listduong);
    for(int i=0;i<L.size;i++){
    	if(L.elems[i] % 2 == 0){
    		listchan->elems[listchan->size] = L.elems[i];
    		listchan->size++;
		} else {
			listle->elems[listle->size] = L.elems[i];
			listle->size++;
		}
		if(L.elems <0){
			listam->elems[listam->size] = L.elems[i];
			listam->size++;
		} else if (L.elems >0){
			listduong->elems[listduong->size] = L.elems[i];
			listduong->size++;
		}
	}
}

int search(List &L,int x){
	for(int i=0;i<L.size;i++){
		if(L.elems[i] ==x) return i+1;
		else return 0;
	}
}

void xoaptgiatrix(int x, List &L){
	int i,j;
	for(i=0;i<L.size;i++){
		if(L.elems[i] == x){
			for(j =i;j<L.size-1;j++){
			L.elems[j] = L.elems[j+1];
		}
		L.size--;
		i--;
		}
		
	}
    inlist(L);
}

int main(){
	struct List L,listchan,listle,listam,listduong;
	init(&L);
	init(&listchan);
	init(&listle);
	init(&listam);
	init(&listduong);
	nhaplist(&L);
	inlist(L);
	int x,k;
	//nhapk(k);
	nhapx(x);
    //chenxvaok(x,k,&L);
	//xoaphantuvitrik(k,&L);
	//timvitrix(x,&L);
	//ptchanleamduong(&L);
	//trungbinham(&L);
	//trungbinhduong(&L);
	//trungbinhchan(&L);
	//trungbinhle(&L);
	/*tachmangcon(L,&listchan,&listle,&listam,&listduong);
	printf("Danh sach chan:\n");
	inlist(listchan);
	printf("Danh sach le:\n");
	inlist(listle);
	printf("Danh sach am:\n");
	inlist(listam);
	printf("Danh sach duong:\n");
	inlist(listduong); */
	xoaptgiatrix(x,L);
	return 0;
}
