#include<stdio.h>

struct Treenode {
    int data;
    struct Treenode *left, *right;
};

struct Treenode *search(struct Treenode *node, int key) {
    if (node == NULL) return NULL;
    if (key == node->data) return node;
    else if (key < node->data)
        return search(node->left, key);
    else
        return search(node->right, key);
}

