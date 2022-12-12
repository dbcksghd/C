#include<stdio.h>
#include<stdlib.h>

typedef struct Treenode {
    int data;
    struct Treenode *left, *right;
} AVLnode;

int get_height(AVLnode *node) { // 높이 계산
    int height = 0;
    if (node != NULL) {
        int max = get_height(node->left) > get_height(node->right) ? get_height(node->left) : get_height(node->right);
        height = 1 + max;
    }
    return height;
}

int get_balance(AVLnode *node) { // 균형 인수 계산
    if (node == NULL) return 0;
    return get_height(node->left) - get_height(node->right);
}

AVLnode *new_node(int key) {
    AVLnode *node = (AVLnode *) malloc(sizeof(AVLnode));
    node->data = key;
    node->right = node->left = NULL;
    return node;
}

AVLnode *rotate_right(AVLnode *parent) {
    AVLnode *child = parent->left;
    parent->left = child->right;
    child->right = parent;
    return child;
}

AVLnode *rotate_left(AVLnode *parent) {
    AVLnode *child = parent->right;
    parent->right = child->left;
    child->left = parent;
    return child; // 새로운 루트를 반환
}

AVLnode *insert(AVLnode *node, int key) {
    if (node == NULL) return new_node(key);

    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else
        return node; // 동일한 키는 허용 x

    int balance = get_balance(node); // 노드들의 균형 인수 계산

    // 새로운 노드가 왼쪽 자식의 왼쪽에 추가되었으면 LL 경우
    if (balance > 1 && key < node->left->data) // LL 경우 처리
        return rotate_right(node);
    //새로운 노드가 오른쪽 자식의 오른쪽에 추가되었으면 RR 경우
    if (balance < -1 && key > node->right->data) // RR 경우 처리
        return rotate_left(node);
    // 새로운 노드가 왼쪽 자식의 오른쪽에 추가되었으면 LR 경우, 이중 회전
    if (balance > 1 && key > node->left->data) { // LR 경우 처리
        node->left = rotate_left(node->left);
        return rotate_right(node);
    }
    // 새로운 노드가 오른쪽 자식의 왼쪽에 추가되었으면 RL 경우, 이중 회전
    if (balance < -1 && key < node->right->data) { // RL 경우 처리
        node->right = rotate_right(node->right);
        return rotate_left(node);
    }
    return node;
}

int main() {
    AVLnode *root = NULL;
    root = insert(root, 80);
    root = insert(root, 20);
    root = insert(root, 90);
    root = insert(root, 70);
    root = insert(root, 10);
    root = insert(root, 40);
    printf("루트 노드는 %d\n", root->data);
    printf("루트의 왼쪽 자식의 오른쪽 자식은 %d\n", root->left->right->data);
    return 0;
}