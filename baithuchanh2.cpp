#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int Data;
	Node* next;
};

//typedef struct Node Node;
typedef struct Node* plist;

void init(plist* L){
	*L = NULL;
}

int length(plist L){
	Node* M = L;
	int dem =0;
	while(M != NULL){
		M = M->next;
		dem++;
	}
	return dem;
}

Node* Make_Node(Node *P,int x){
	P = (Node*)malloc(sizeof(Node));
	P->Data = x;
	P->next = NULL;
	return P;
}

void themdau(plist *L,int x){
	Node *P= Make_Node(P,x);
	P->next = *L;
	*L=P;
}

void themcuoi(plist *L,int x){
	Node *P = Make_Node(P,x);
	Node *M = *L;
	if(M == NULL){
		*L = P;
		return;
	}
	while(M->next != NULL)
	M = M-> next;
	M->next =P;
}

void themvaovitrik(plist *L,int x,int k){
	if(k<1 || k>length(*L)+1){
		printf("Khong the them!");
		return;
	}
	if(k == 1){
		themdau(L,x);
		return;
	}
	Node *P = Make_Node(P,x);
	Node* M = *L;
	int dem =1;
	while(M->next != NULL && dem != k-1){
		M = M->next;
		dem++; 
	}
	P->next = M->next;
	M->next = P; 
}

void xoadau(plist *L){
	*L = (*L)->next;
	free(*L);
} 

void xoacuoi(plist *L){
	if(*L == NULL){
		printf("Khong the chen.\n");
		return;
	}
	if((*L)->next == NULL){
		free(*L);
		*L == NULL;
		return;
	}
	Node *M =*L;
	while(M->next->next != NULL){
		M = M->next;
	}
	free(M->next);
	M->next = NULL;
}

void xoavtk(plist *L,int k){
	if(*L ==NULL || k<1 || k>length(*L)){
		printf("khong the xoa.\n");
		return;
	}
	if(k == 1){
		xoadau(L);
		return;
	}
	Node *M=*L;
	int dem=1;
	while(M != NULL && dem != k-1){
		M = M->next;
		dem++;
	}
	Node* temp = M->next;
	M->next = temp->next;
	free(temp);
}

void nhapdl(plist *L){
	int n,data;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap gia tri phan tu thu %d: ",i+1);
		scanf("%d",&data);
		themcuoi(L,data);
	}
}

void inds(plist L){
	Node *M=L;
	printf("Danh sach: ");
	while(M != NULL){
		printf("%3d",M->Data);
		M=M->next;
	}
	printf("\n");
}

int timpttrongds(plist L,int x){
    Node* M=L;
    int vitri=0;
    int tim =0;
    printf("Tim thay phan tu %d tai vi tri: ",x);
    while(M != NULL){
	    vitri++;
	    if(M->Data == x){
	        printf("%3d",vitri);
			tim =1;	
		}
		M = M->next;
    }
    printf("\n");
    if(!tim){
    	printf("Khong tim thay %d\n",x);
	}
	return vitri;
}

void timdautimcuoi(plist L,int x){
	Node *M=L;
	int vitridau = -1;
	int vitricuoi = -1;
	int vitri = 0;
	while(M!= NULL){
		vitri++;
		if(M->Data == x){
		    if(vitridau == -1){
			    vitridau = vitri;
		    }
		    vitricuoi = vitri;
	    }
	    M=M->next;
    }
    if(vitridau != -1){
    	printf("Vi tri dau tien cua %d: %d\n",x,vitridau);
    	printf("Vi tri cuoi cua %d: %d\n",x,vitricuoi);
	}else{
		printf("Khong tim thay phan tu %d\n",x);
	}
}

void dempt(plist L){
	int demchan = 0,demle = 0,demam=0,demduong=0;
	Node* M=L;
	while(M != NULL){
		if(M->Data %2 == 0){
			demchan++;
			demduong++;
		}else{
			demle++;
			if(M->Data <0){
				demam++;
			}else{
				demduong++;
			}
		}
		M=M->next;
	}
	printf("So phan tu chan: %d\n",demchan);
	printf("So phan tu le: %d\n",demle);
	printf("So phan tu am: %d\n",demam);
	printf("So phan tu duong: %d\n",demduong);
}

void tbcchanleamduong(plist L){
	int tongchan=0,tongle=0,tongam=0,tongduong=0;
	int soptchan=0,soptle=0,soptam=0,soptduong=0;
	Node* M= L;
	while(M != NULL){
		if(M->Data % 2 == 0){
			tongchan += M->Data;
			soptchan++;
			tongduong += M->Data;
			soptduong++;
		} else {
			tongle+= M->Data;
			soptle++;
			if(M->Data > 0){
				tongam += M->Data;
				soptam++;
			} else{
				tongduong += M->Data;
				soptduong++;
			}
		}
		M=M->next;
	}
	if(soptchan>0){
		printf("Trung binh cong pt chan: %g\n",(float)tongchan/soptchan);
	}
	if(soptle>0){
		printf("Trung binh cong pt le: %g\n",(float)tongle/soptle);
	}
	if(soptam>0){
		printf("Trung binh cong pt am: %g\n",(float)tongchan/soptchan);
	}
	if(soptduong>0){
		printf("Trung binh cong pt duong: %g\n",(float)tongduong/soptduong);
	}
}

void danhsachcon(plist L, plist* listchan,plist* listle,plist* listam,plist* listduong,int x) {
    Node* M = L;
    while (M != NULL) {
        Node *P = Make_Node(P,x);
        if (M->Data % 2 == 0) {
            themcuoi(listchan, M->Data);
            themcuoi(listduong, M->Data);
        } else {
            themcuoi(listle, M->Data);
            if (M->Data < 0) {
                themcuoi(listam, M->Data);
            } else {
                themcuoi(listduong, M->Data);
            }
        }
        M = M->next;
    }
    printf("Danh sach chan: \n");
    inds(*listchan);
    printf("Danh sach le: \n");
    inds(*listle);
    printf("Danh sach am: \n");
    inds(*listam);
    printf("Danh sach duong: \n");
    inds(*listduong);
}

int main(){
    plist L;
	init(&L);
	nhapdl(&L);
	inds(L);
	int x;
	int k;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap k: ");
	scanf("%d",&k);
	//themdau(&L,x);
	//themcuoi(&L,x);
	themvaovitrik(&L,x,k);
	//printf("Danh sach sau khi chen: ");
	inds(L);
	//xoadau(&L);
	//xoacuoi(&L);
	//xoavtk(&L,k);
	//printf("Danh sach sau khi xoa: ");
	//timpttrongds(L,x);
	//timdautimcuoi(L,x);
	//inds(L);
	//dempt(L);
	//tbcchanleamduong(L);
	//plist dschan = NULL,dsle=NULL,dsam=NULL,dsduong=NULL;
	//danhsachcon(L,&dschan,&dsle,&dsam,&dsduong,x);
	Node* M = L;
	while(M != NULL){
		Node* P = M;
		M = M->next;
		free(P);
	}
	return 0;
}
