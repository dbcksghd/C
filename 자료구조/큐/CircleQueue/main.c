#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5
typedef struct queue { // 큐 타입
    int data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

// 초기화 함수
void init_queue(QueueType *q) {
    q->rear = 0;
    q->front = 0;
}

// 공백 상태 검출 함수
int is_empty(QueueType *q) {
    if (q->front == q->rear) return 1;
    else return 0;
}

// 포화 상태 검출 함수
int is_full(QueueType *q) {
    if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front) return 1;
    else return 0;
}


// 삽입 함수
void enqueue(QueueType *q, int item) {
    if (is_full(q)) printf("큐가 포화상태입니다");
    else {
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
        q->data[++(q->rear)] = item;
    }
}

// 삭제 함수
int dequeue(QueueType *q) {
    if (is_empty(q)) {
        printf("큐가 공백상태입니다");
        return 0;
    } else {
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return q->data[q->front];
    }
}

// 원형큐 출력 함수
void queue_print(QueueType *q) {
    for (int i = q->front; i != q->rear;) {
        i = (i + 1) % (MAX_QUEUE_SIZE);
        printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main(void) {
    QueueType q;
    int num;

    init_queue(&q);

    enqueue(&q, 10);
    queue_print(&q);
    enqueue(&q, 20);
    queue_print(&q);
    enqueue(&q, 30);
    queue_print(&q);

    dequeue(&q);
    queue_print(&q);
    dequeue(&q);
    queue_print(&q);

    return 0;
}