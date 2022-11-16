#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;
//		 15
//	 4		 20
// 	1	 	 16 25
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

// 전위 순회
int preorder(TreeNode *root) {
    if (root != NULL) { // 종료 조건
        printf("[%d] ", root->data);    // 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
        preorder(root->left);    // 왼쪽서브트리 순회
        preorder(root->right);    // 오른쪽서브트리 순회
    }
}

int main(void) {
    printf("전위 순회 결과=");
    preorder(root);
    printf("\n");
    return 0;
}