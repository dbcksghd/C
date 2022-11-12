#include <stdio.h>
#include <stdlib.h>

typedef struct DListNode {	// 이중연결 노드 타입
    int data;
    struct DListNode* llink;
    struct DListNode* rlink;
} DListNode;

// 이중 연결 리스트를 초기화
void init(DListNode* phead)
{
    // phead->llink =  초기화 무엇?
    // phead->rlink =  초기화 무엇?
}
// 이중 연결 리스트의 노드를 출력
void print_dlist(DListNode* phead)
{
    DListNode* p;
    // 모든 노드의 데이터 출력하려면?
}
// 새로운 데이터를 노드 before의 오른쪽에 삽입한다.
void dinsert(DListNode* before, int item)
{
    DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
    newnode->data = item;
    // 삽입 코드
}
// 노드 removed를 삭제한다.
void ddelete(DListNode* head, DListNode* removed)
{
    //삭제 코드
    free(removed);
}

int main(void)
{
    DListNode* head = (DListNode*)malloc(sizeof(DListNode));
    init(head);
    printf("추가 단계\n");
    for (int i = 1; i <= 5; i++) {
        // 헤드 노드의 오른쪽에 삽입
        dinsert(head, i*10);
        print_dlist(head);
    }
    printf("\n삭제 단계\n");
    for (int i = 1; i <= 5; i++) {
        print_dlist(head);
        ddelete(head, head->rlink);
    }
    free(head);
    return 0;
}