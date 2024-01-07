#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Node* Btree;
Btree T;

void makeNullTree(Btree* T) {
    (*T) = NULL;
}

int isEmptyTree(Btree T) {
    return T == NULL;
}

Btree leftChild(Btree T) {
    if (T != NULL) return T->left;
    else return NULL;
}

Btree rightChild(Btree T) {
    if (T != NULL) return T->right;
    else return NULL;
}

int isLeaf(Btree T) {
    if (T != NULL) {
        return (leftChild(T) == NULL) && (rightChild(T) == NULL);
    } else {
        return 0; // Tr? v? 0 khi c�y l� NULL
    }
}

int countNodes(Btree T) {
    if (isEmptyTree(T)) return 0;
    else return 1 + countNodes(leftChild(T)) + countNodes(rightChild(T));
}

Btree createNode(int x, Btree l, Btree r) {
    Btree N;
    N = (Node*)malloc(sizeof(Node));
    N->data = x;
    N->left = l;
    N->right = r;
    return N;
}

Btree insertNode(Btree root, int value) {
    if (root == NULL) {
        return createNode(value, NULL, NULL);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

Btree searchNode(Btree root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return searchNode(root->left, value);
    } else {
        return searchNode(root->right, value);
    }
}

Btree findMin(Btree root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Btree deleteNode(Btree root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
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
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void preorderTraversal(Btree root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void inorderTraversal(Btree root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(Btree root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// H�m d? t�m con tr�i c?a m?t d?nh tr�n c�y
Btree findLeftChild(Btree root, int value) {
    Btree node = searchNode(root, value);
    if (node != NULL) {
        return leftChild(node);
    } else {
        return NULL;
    }
}

// H�m d? t�m con ph?i c?a m?t d?nh tr�n c�y
Btree findRightChild(Btree root, int value) {
    Btree node = searchNode(root, value);
    if (node != NULL) {
        return rightChild(node);
    } else {
        return NULL;
    }
}

// H�m d? xu?t d? li?u t? c�y ra m�n h�nh theo th? t? in-order
void printTree(Btree root) {
    if (root != NULL) {
        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
    }
}

// H�m d? nh?p d? li?u cho c�y g?m n d?nh
Btree inputTree(int n) {
    Btree root = NULL;
    int x;

    printf("Nh?p gi� tr? cho c�c n�t:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insertNode(root, x);
    }

    return root;
}

int main() {
    makeNullTree(&T);
    int n;

    printf("Nh?p s? lu?ng n�t trong c�y: ");
    scanf("%d", &n);

    T = inputTree(n);

    printf("Duy?t c�y theo th? t? tru?c (pre-order): ");
    preorderTraversal(T);
    printf("\n");

    printf("Duy?t c�y theo th? t? gi?a (in-order): ");
    inorderTraversal(T);
    printf("\n");

    printf("Duy?t c�y theo th? t? sau (post-order): ");
    postorderTraversal(T);
    printf("\n");

    printf("S? n�t trong c�y: %d\n", countNodes(T));
    printf("C�y c� %s\n", isEmptyTree(T) ? "r?ng" : "kh�ng r?ng");

    int valueToSearch;
    printf("Nh?p gi� tr? c?n t�m ki?m: ");
    scanf("%d", &valueToSearch);
    Btree result = searchNode(T, valueToSearch);
    if (result != NULL) {
        printf("Gi� tr? %d du?c t�m th?y trong c�y.\n", valueToSearch);
    } else {
        printf("Gi� tr? %d kh�ng du?c t�m th?y trong c�y.\n", valueToSearch);
    }

    printf("Xu?t d? li?u t? c�y theo th? t? in-order: ");
    printTree(T);
    printf("\n");

    int nodeValue;
    printf("Nh?p gi� tr? c?a n�t d? t�m con tr�i v� con ph?i: ");
    scanf("%d", &nodeValue);
    Btree leftChild = findLeftChild(T, nodeValue);
    Btree rightChild = findRightChild(T, nodeValue);

    if (leftChild != NULL) {
        printf("Con tr�i c?a n�t %d l� %d\n", nodeValue, leftChild->data);
    } else {
        printf("N�t %d kh�ng c� con tr�i\n", nodeValue);
    }

    if (rightChild != NULL) {
        printf("Con ph?i c?a n�t %d l� %d\n", nodeValue, rightChild->data);
    } else {
        printf("N�t %d kh�ng c� con ph?i\n", nodeValue);
    }

    return 0;
}

