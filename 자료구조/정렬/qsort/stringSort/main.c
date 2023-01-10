#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char array[20];
} string;

int comp(const void *a, const void *b) {
    return strcmp((char *) a, (char *) b);
}

int main() {
    string arr[10] = {
            {"yoochanhong"},
            {"chobyeongjin"},
            {"leejeongho"},
            {"kimyeonwoo"},
            {"parkjunsu"},
            {"gwonhaeun"},
            {"kanginhye"},
            {"kimgyuha"},
            {"kimsanggu"},
            {"leejunyeong"}
    };
    qsort(arr, 10, sizeof(arr[0]), comp);
    for (int i = 0; i < 10; i++) {
        printf("%s\n", arr[i].array);
    }
    return 0;
}