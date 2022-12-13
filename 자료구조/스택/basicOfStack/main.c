#include<stdio.h>

#define MAX_STACK_SIZE 100
struct StackType {
    int data[MAX_STACK_SIZE];
    int top;
};

void init_stack(struct StackType *p) {
    p->top = -1;
}

// 공백상태 확인
int is_empty(struct StackType *p) {
    return p->top == -1;
}
// 포화상태 확인
int is_full(struct StackType *p) {
    return p->top >= (MAX_STACK_SIZE - 1);
}
// 스택 삽입
void push(struct StackType *p, int item) {
    if (is_full(p)) printf("오버플로우");
    else p->data[++(p->top)] = item;
}
// 스택 제거
int pop(struct StackType *p) {
    if (is_empty(p)) printf("언더플로우");
    else return p->data[(p->top)--];
}

int main(void) {
    struct StackType s;  // 스택을 정적으로 생성

    init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
}