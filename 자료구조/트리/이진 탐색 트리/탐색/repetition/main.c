#include<stdio.h>

struct Treenode {
    int data;
    struct Treenode *left, *right;
};

struct Treenode *search(struct Treenode *node, int key) {
    while (node != NULL) {
        if (key == node->data) return node;
        else if (key < node->data) node = node->left;
        else node = node->right;
    }
    return NULL;
}