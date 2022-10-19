#include<stdio.h>
#include<string.h>
#define MAX_STACK_SIZE 100


struct StackType {
    int data[MAX_STACK_SIZE];
    int top;
};

// 스택 초기화 함수
void init_stack(struct StackType* p)
{
    p->top = -1;
}

// 공백 상태 검출 함수
int is_empty(struct StackType* p)
{
    return (p->top == -1);
}
// 포화 상태 검출 함수
int is_full(struct StackType* p)
{
    return (p->top == (MAX_STACK_SIZE - 1));
}
// 삽입함수
void push(struct StackType* p, int item)
{
    if (is_full(p)) {
        printf("포화상태\n");
        return;
    }
    else p->data[++(p->top)] = item;
}
// 삭제함수
int pop(struct StackType* p)
{
    if (is_empty(p)) {
        printf("공백상태\n");
        return 1;
    }
    else return p->data[(p->top)--];
}
int peek(struct StackType* p)
{
    if (is_empty(p)) {
        printf("공백상태\n");
        return 1;
    }
    else return p->data[p->top];
}
int evaluate(char exp[]) {
    int op1, op2, value, i = 0;
    int length = strlen(exp);
    char ch;

    struct StackType s;
    init_stack(&s);

    for (i = 0; i < length; i++) {
        ch = exp[i];
        //  ch가 연산자일 경우 피연산자를 스택에서 pop한 뒤 계산 후 push
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }
        }
        else {  //ch가 피연산자일 경우
            value = ch - '0';
            push(&s, value);
        }
    }
    // 연산을 수행한 후 스택에 결과값을 push한다.
    return pop(&s);
}

int main(void) {
    char p[] = "82/3-32*+";
    int result;
    printf("후위 표기식은 %s\n", p);
    result = evaluate(p);
    printf("결과값은 %d\n", result);
    return 0;
}