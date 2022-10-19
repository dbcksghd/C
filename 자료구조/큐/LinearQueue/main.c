#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef struct queue {
    int front;
    int rear;
    int data[MAX_QUEUE_SIZE];
} QueueType;


void init_queue(QueueType *q) {
    q->rear = -1;
    q->front = -1;
}

int is_full(QueueType *q) {
    if (q->rear == MAX_QUEUE_SIZE - 1) return 1;
    else return 0;
}

int is_empty(QueueType *q) {
    if (q->front == q->rear) return 1;
    else return 0;
}

void enqueue(QueueType *q, int item) {
    if (is_full(&q) == 1) {
        printf("큐가 포화상태입니다.");
        return;
    } else {
        q->data[++q->rear] = item;
    }
}

int dequeue(QueueType *q) {
    if (is_empty(q) == 1) {
        printf("큐가 공백상태입니다.");
        return -1;
    } else {
        return q->data[++q->front];
    }
}

int queue_print(QueueType *q) {  // 큐 안에 있는 데이터를 출력하는 함수
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q->rear && i > q->front) printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main(void) {
    int item = 0;
    QueueType q;

    init_queue(&q);

    enqueue(&q, 10);  //10 삽입
    queue_print(&q);
    enqueue(&q, 20);   //20 삽입
    queue_print(&q);
    enqueue(&q, 30); //30 삽입
    queue_print(&q);

    dequeue(&q); // 디큐(큐 안에 있는 값 삭제)
    queue_print(&q);

    dequeue(&q); // 디큐(큐 안에 있는 값 삭제)
    queue_print(&q);

    return 0;
}