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
        return 0; // Tr? v? 0 khi cây là NULL
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

// Hàm d? tìm con trái c?a m?t d?nh trên cây
Btree findLeftChild(Btree root, int value) {
    Btree node = searchNode(root, value);
    if (node != NULL) {
        return leftChild(node);
    } else {
        return NULL;
    }
}

// Hàm d? tìm con ph?i c?a m?t d?nh trên cây
Btree findRightChild(Btree root, int value) {
    Btree node = searchNode(root, value);
    if (node != NULL) {
        return rightChild(node);
    } else {
        return NULL;
    }
}

// Hàm d? xu?t d? li?u t? cây ra màn hình theo th? t? in-order
void printTree(Btree root) {
    if (root != NULL) {
        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
    }
}

// Hàm d? nh?p d? li?u cho cây g?m n d?nh
Btree inputTree(int n) {
    Btree root = NULL;
    int x;

    printf("Nh?p giá tr? cho các nút:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insertNode(root, x);
    }

    return root;
}

int main() {
    makeNullTree(&T);
    int n;

    printf("Nh?p s? lu?ng nút trong cây: ");
    scanf("%d", &n);

    T = inputTree(n);

    printf("Duy?t cây theo th? t? tru?c (pre-order): ");
    preorderTraversal(T);
    printf("\n");

    printf("Duy?t cây theo th? t? gi?a (in-order): ");
    inorderTraversal(T);
    printf("\n");

    printf("Duy?t cây theo th? t? sau (post-order): ");
    postorderTraversal(T);
    printf("\n");

    printf("S? nút trong cây: %d\n", countNodes(T));
    printf("Cây có %s\n", isEmptyTree(T) ? "r?ng" : "không r?ng");

    int valueToSearch;
    printf("Nh?p giá tr? c?n tìm ki?m: ");
    scanf("%d", &valueToSearch);
    Btree result = searchNode(T, valueToSearch);
    if (result != NULL) {
        printf("Giá tr? %d du?c tìm th?y trong cây.\n", valueToSearch);
    } else {
        printf("Giá tr? %d không du?c tìm th?y trong cây.\n", valueToSearch);
    }

    printf("Xu?t d? li?u t? cây theo th? t? in-order: ");
    printTree(T);
    printf("\n");

    int nodeValue;
    printf("Nh?p giá tr? c?a nút d? tìm con trái và con ph?i: ");
    scanf("%d", &nodeValue);
    Btree leftChild = findLeftChild(T, nodeValue);
    Btree rightChild = findRightChild(T, nodeValue);

    if (leftChild != NULL) {
        printf("Con trái c?a nút %d là %d\n", nodeValue, leftChild->data);
    } else {
        printf("Nút %d không có con trái\n", nodeValue);
    }

    if (rightChild != NULL) {
        printf("Con ph?i c?a nút %d là %d\n", nodeValue, rightChild->data);
    } else {
        printf("Nút %d không có con ph?i\n", nodeValue);
    }

    return 0;
}

