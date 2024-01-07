#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int key;
	struct Node* left;
	struct Node* right;
}Node;
typedef struct Node* Btree;
Btree T;

void makeNullTree(Btree *T){
	(*T)= NULL;
}

int emptytree(Btree T){
	return T==NULL;
}

Btree leftchild(Btree T){
	if(T != NULL) return T->left;
	else return NULL;
}

Btree rightchild(Btree T){
	if(T != NULL) return T->right;
	else return NULL;
}

Btree findMin(Btree root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

int nutla(Btree T){
	if(T != NULL){
		return (leftchild(T)==NULL)&&(rightchild(T)==NULL);
	}else{
		return 0;
	}
}

int sonut(Btree T){
	if(emptytree(T)) return 0;
	else return 1+sonut(leftchild(T))+sonut(rightchild(T));
}

Btree taocay(int x,Btree l,Btree r){
	Btree N;
	N = (Node*)malloc(sizeof(Node));
	N->key = x;
	N->left = l;
	N->right = r;
	return N;
}
Btree search(Btree T, int x){
	if (T == NULL || T->key == x) {
        return T;
    }

    if (x < T->key) {
        return search(T->left, x);
    } else {
        return search(T->right, x);
    }
}

Btree themnutx(Btree T,int x){
	if (T == NULL) {
        return taocay(x, NULL, NULL);
    }

    if (x < T->key) {
        T->left = themnutx(T->left, x);
    } else if (x > T->key) {
        T->right = themnutx(T->right, x);
    }

    return T;
}

Btree nhapdl(int n){
	Btree P = NULL;
	int x;
	printf("Nhap gia tri cho cac nut: ");
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		P = themnutx(P,x);
	}
	return P;
}

int xoanut(Btree &T,int data){
	if(T != NULL){
		if(T->key == data){
			if(T->left == NULL && T->right == NULL){
				T = NULL;
				return 0;
			}
			if(T->left != NULL && T->right ==NULL){
				T = T->left;
				return 0;
			}
			if(T->left == NULL && T->right != NULL){
				T = T->right;
				return 0;
			}
			if(T->left != NULL && T->right !=NULL){
				Btree temp = T->left;
				while(temp->right->right!=NULL){
					temp = temp->right;
				}
				temp->right->left = T->left;
				temp->right->right = T->right;
				T = T->right;
				temp->right =NULL;
				return 0;
			}
		}
		else{
			xoanut(T->left,data);
			xoanut(T->right,data);
		}
	}
}

void duyettruoc(Btree T){
	if(T != NULL){
		printf("%d ", T->key);
		duyettruoc(T->left);
		duyettruoc(T->right);
	}
}

void duyetgiua(Btree T){
	if(T != NULL){
		duyetgiua(T->left);
		printf("%d ", T->key);
		duyetgiua(T->right);
	}
}

void duyetsau(Btree T){
	if(T != NULL){
		duyetsau(T->left);
		duyetsau(T->right);
		printf("%d ",T->key);
	}
}

Btree timcontrai(Btree T, int value) {
    Btree node = search(T, value);
    if (node != NULL) {
        return leftchild(node);
    } else {
        return NULL;
    }
}

Btree timconphai(Btree T, int value) {
    Btree node = search(T, value);
    if (node != NULL) {
        return rightchild(node);
    } else {
        return NULL;
    }
}

Btree themdinh(Btree T, int value) {
    if (T == NULL) {
        return taocay(value, NULL, NULL);
    }

    if (value < T->key) {
        T->left = themdinh(T->left, value);
    } else if (value > T->key) {
        T->right = themdinh(T->right, value);
    }
    return T;
}

Btree deleteValue(Btree root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->key) {
        root->left = deleteValue(root->left, value);
    } else if (value > root->key) {
        root->right = deleteValue(root->right, value);
    } else {
        if (root->left == NULL) {
            Btree temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Btree temp = root->left;
            free(root);
            return temp;
        }

        Btree temp = findMin(root->right);
        root->key = temp->key;
        root->right = deleteValue(root->right, temp->key);
    }

    return root;
}

int main(){
	makeNullTree(&T);
	int n;
	printf("Nhap so luong nut trong cay: ");
	scanf("%d",&n);
	T = nhapdl(n);
	printf("Duyet cay theo thu tu truoc: ");
	duyettruoc(T);
	printf("\n");
	printf("Duyet cay theo thu tu giua: ");
	duyetgiua(T);
	printf("\n");
	printf("Duyet cay theo thu tu sau: ");
	duyetsau(T);
	printf("\n");
	int nodeValue;
    printf("Nhap gia tri cua nut de tin con trai va con phai: ");
    scanf("%d", &nodeValue);
    Btree leftchild = timcontrai(T, nodeValue);
    Btree rightchild = timconphai(T, nodeValue);

    if (leftchild != NULL) {
        printf("Con trai cua nut %d la %d\n", nodeValue, leftchild->key);
    } else {
        printf("Nut %d khong co con trai\n", nodeValue);
    }

    if (rightchild != NULL) {
        printf("Con phai cua nut %d la %d\n", nodeValue, rightchild->key);
    } else {
        printf("Nut %d khong co con phai\n", nodeValue);
    }
    printf("So nut trong cay: %d\n", sonut(T));
    
    int valueToSearch;
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &valueToSearch);
    Btree result = search(T, valueToSearch);
    if (result != NULL) {
        printf("Gia tri %d duoc tim thay trong cay.\n", valueToSearch);
    } else {
        printf("Giá tri %d khong duoc tim thay trong cay.\n", valueToSearch);
    }
    
    int x;
    printf("Nhap gia tri cua nut de them vao cay: ");
    scanf("%d", &x);
    T = themdinh(T, x);
    printf("Cay sau khi them gia tri moi:\n");
    printf("Duyet cay theo thu tu giua: ");
    duyetgiua(T);
    printf("\n");
    
    int y;
    printf("Nhap gia tri cua nut de xoa khoi cay: ");
    scanf("%d", &y);
    T = deleteValue(T, y);
    printf("Cay sau khi xoa gia tri %d: \n",y);
    printf("Duyet cay theo thu tu giua: ");
    duyetgiua(T);
    printf("\n");
}
