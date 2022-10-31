#include<stdio.h>

#define MAX_LIST_SIZE 100 // 리스트의 최대크기

typedef struct {
    int array[MAX_LIST_SIZE]; // 배열 정의
    int size; // 현재 리스트에 저장된 항목들의 개수
} ArrayListType;

// 리스트 초기화 함수
void init(ArrayListType *L) {
    L->size = 0;
}
// 리스트가 비어 있으면 1을 반환

// 그렇지 않으면 0을 반환
int is_empty(ArrayListType *L) {
    return L->size == 0;
}

// 리스트가 가득 차 있으면 1을 반환
// 그렇지 않으면 0을 반환
int is_full(ArrayListType *L) {
    return L->size == MAX_LIST_SIZE; // 왜 MAX_LIST_SIZE -1이 아닐까?
}

// 리스트 출력
void print_list(ArrayListType *L) {
    int i;
    for (i = 0; i < L->size; i++) {
        printf("%d ", L->array[i]);
    }
    printf("\n");
}

void insert_last(ArrayListType *L, int item) {
    if (is_full(L)) {
        printf("리스트 오버플로우");
    }
    L->array[L->size++] = item;
}

void insert(ArrayListType *L, int pos, int item) {
    if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
        for (int i = (L->size - 1); i >= pos; i--) {
            L->array[i + 1] = L->array[i];
        }
        L->array[pos] = item;
        L->size++;
    }
}

int delete(ArrayListType *L, int pos) {
    int item;
    if (is_empty(L) == 1 && pos < 0 || pos >= L->size) {
        printf("오류");
        return -1;
    }
    item = L->array[pos];
    for (int i = pos; i < (L->size - 1); i++) {
        L->array[i] = L->array[i + 1];
    }
    L->size--;
    return item;
}

int main(void) {
    ArrayListType list;

    init(&list);
    insert(&list, 0, 30);    // 0번째 위치에 30 추가
    print_list(&list);
    insert(&list, 0, 10);    // 0번째 위치에 10 추가
    print_list(&list);
    insert(&list, 1, 20);    // 1번째 위치에 20 추가
    print_list(&list);
    insert_last(&list, 40);    // 맨 끝에 40 추가
    print_list(&list);
    delete(&list, 0);        // 0번째 항목 삭제
    print_list(&list);
    return 0;
}