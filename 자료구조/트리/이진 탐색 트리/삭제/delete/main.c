#include<stdio.h>
#include<stdlib.h>
#include "insert.h"

struct Treenode *min_value_node(struct Treenode *node) {
    struct Treenode *current = node;

    // 맨 왼쪽 단말 노드를 찾으러 내려감
    while (current->left != NULL)
        current = current->left;

    return current;
}

struct Treenode *delete(struct Treenode *node, int key) {
    if (node == NULL) return node;
    // 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
    if (key < node->data)
        node->left = delete(node->left, key);// delete함수 호출
        // 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
    else if (key > node->data)
        node->right = delete(node->left, key); // delete함수 호출
        // 키가 루트와 같으면 이 노드를 삭제하면 됨
    else {
        // 첫 번째나 두 번째 경우
        if (node->left == NULL) {
            struct Treenode *temp = node->right;
            free(node);
            return temp;
        } else if (node->right == NULL) {
            struct Treenode *temp = node->left;
            free(node);
            return temp;
        }
        // 세 번째 경우
        struct Treenode *temp = min_value_node(node->right);

        // 중외 순회시 후계 노드를 복사한다.
        node->data = temp->data;
        // 중외 순회시 후계 노드를 삭제한다.
        node->right = delete(node->right, temp->data);
    }
    return node;
}

int main() {
    struct Treenode *root = NULL;
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 50);
    root = delete(root, 30);
    root = delete(root, 20);

    printf("루트 노드는 %d\n", root->data);
    printf("루트의 오른쪽 자식의 왼쪽 자식은 %d\n", root->right->left->data);
    return 0;
}