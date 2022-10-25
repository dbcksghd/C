#include <stdio.h>

#define MAX_QUEUE_SIZE 5
typedef struct dequeue { // 큐 타입
    int data[MAX_QUEUE_SIZE];
    int front, rear;
} DequeType;

// 초기화 함수
void init_deque(DequeType *q) {
    q->front = q->rear = 0;
}

// 공백 상태 검출 함수
int is_empty(DequeType *q) {
    if (q->rear == q->front) return 1;
    else return 0;
}

// 포화 상태 검출 함수
int is_full(DequeType *q) {
    if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front) return 1;
    else return 0;
}

// 후단 삽입 함수(스택 push)
void add_rear(DequeType *q, int item) {
    if (is_full(q)) printf("큐가 포화상태입니다");
    else {
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
        q->data[(q->rear)] = item;
    }
}

// 후단 삭제 함수(스택 pop)
int delete_rear(DequeType *q) {
    if (is_empty(q)) printf("큐가 공백상태입니다");
    else {
        int temp = q->data[q->rear];
        q->rear = (q->rear -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
        return temp;
    }
}

// 전단 삭제 함수(스택 pop)
int delete_front(DequeType *q) {
    if (is_empty(q))
        printf("큐가 공백상태입니다");
    else {
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return q->data[(q->front)];
    }
}

// 전단 삽입 함수(스택 push)
void add_front(DequeType *q, int item) {
    if (is_full(q)) printf("큐가 포화상태입니다");
    else {
        q->data[(q->front)] = item;
        q->front = (q->front -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    }
}

// 덱 출력 함수
void deque_print(DequeType *q) {
    for (int i = q->front; i != q->rear;) {
        i = (i + 1) % (MAX_QUEUE_SIZE);
        printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main(void) {
    DequeType q;

    init_deque(&q);

    add_rear(&q, 10);
    deque_print(&q);
    add_front(&q, 20);
    deque_print(&q);
    add_rear(&q, 30);
    deque_print(&q);

    delete_front(&q);
    deque_print(&q);
    delete_rear(&q);
    deque_print(&q);

    return 0;
}