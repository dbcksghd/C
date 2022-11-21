#include <stdio.h>
#include <stdlib.h>

struct Treenode {
    int data;
    struct Treenode* left, * right;
};

struct Treenode* new_node(int key) {
    struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
    new->data = key;//new노드에 key값 대입
    new->left = new->right = NULL;//new의 left와 right를 NULL로
    return new;
}

struct Treenode* insert(struct Treenode* node, int key) {
    if (node == NULL) return new_node(key);

    if (node->data > key)
        node->left = insert(node->left, key);//insert함수 호출
    else if (node->data < key)
        node->right = insert(node->right, key);//insert함수 호출

    return node;
}

int main() {
    struct Treenode* root = NULL;
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 50);
    printf("루트 노드는 %d\n", root->data);
    printf("루트의 오른쪽 자식의 오른쪽 자식은 %d\n", root->right->right->data);
    return 0;
}