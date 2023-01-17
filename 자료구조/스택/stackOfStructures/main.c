#include <stdio.h>

#define MAX_SIZE 100

struct element {
    char name[20];
    int num;
} stack[MAX_SIZE];

int top = -1;

int is_empty() {
    if (top == -1) return 1;
    else return 0;
}

int is_full() {
    if (top == MAX_SIZE - 1) return 1;
    else return 0;
}

void push(struct element data) {
    if (is_full() == 1) printf("오버플로우\n");
    else stack[++top] = data;
}

struct element pop() {
    if (is_empty() == 1) printf("언더플로우\n");
    else return stack[top--];
}

int main() {
    struct element data, popData;
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", data.name, &data.num);
        push(data);
    }
    for (int i = 0; i < 5; i++) {
        popData = pop();
        printf("%s %d\n", popData.name, popData.num);
    }
}