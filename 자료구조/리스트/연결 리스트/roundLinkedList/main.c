#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {    // 노드 타입
    int data;
    struct ListNode *link;
} ListNode;

// 리스트의 항목 출력
void print_list(ListNode *head) {
    ListNode *p = head->link;
    do {
        printf("%d->", p->data);
        p = p->link;
    } while (p != head->link);
}

ListNode *insert_first(ListNode *head, int item) {
    ListNode *node = (ListNode *) malloc(sizeof(ListNode));
    node->data = item;
    if (head == NULL) {
        head = node;
        node->link = node;
    } else {
        node->link = head->link;
        head->link = node;
    }
    return head;    // 변경된 헤드 포인터를 반환한다.
}

ListNode *insert_last(ListNode *head, int item) {
    ListNode *node = (ListNode *) malloc(sizeof(ListNode));
    node->data = item;
    if (head == NULL) {
        head = node;
        node->link = node;
    } else {
        node->link = head->link;
        head->link = node;
        head = node;
    }
    return head;    // 변경된 헤드 포인터를 반환한다.
}

ListNode *delete_first(ListNode *head) {
    ListNode *removed = head->link;
    if (head == NULL) return NULL;
    head->link = removed->link;
    free(removed);
    return head;
}

ListNode *delete_last(ListNode *head) {
    ListNode *removed = head;
    ListNode *p = head;
    while (p->link != head) {
        p = p->link;
    }
    p->link = head->link;
    head = p;
    free(removed);
    return head;
}

int main(void) {
    ListNode *head = NULL;

    head = insert_last(head, 20);
    head = insert_last(head, 30);
    head = insert_last(head, 40);
    head = insert_first(head, 10);
    head = delete_first(head);
    head = delete_last(head);
    print_list(head);
    return 0;
}