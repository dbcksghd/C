#include<stdio.h>
#include<stdlib.h>

#define MAX_VERTICES 50

struct Graphnode {
    int vertex;
    struct Graphnode *link;
};

struct Graph {
    int n; //정점의 수
    struct Graphnode *adj_list[MAX_VERTICES];
};

//초기화
void init(struct Graph *g) {
    g->n = 0;//1. 그래프 g의 정점 수 0으로 초기화
    for (int v = 0; v < MAX_VERTICES; v++)
        g->adj_list[v] = NULL;//2. 그래프 g의 인접 리스트 헤더들 NULL로 초기화
}

//정점 삽입
void insert_vertex(struct Graph *g, int v) {
    if (((g->n) + 1) > MAX_VERTICES) {
        printf("그래프 : 정점 개수 초과\n");
        return;
    }
    g->n++;//3. 정점 수 증가
}

//간선 삽입 v를 u의 인접 리스트에 삽입한다. (연결 리스트 맨 앞에 삽입)
void insert_edge(struct Graph *g, int u, int v) {
    struct Graphnode *node;
    //4. 오류 조건은?
    if (u >= g->n || v >= g->n) {
        printf("그래프 : 정점 번호 오류\n");
        return;
    }
    node = (struct Graphnode *) malloc(sizeof(struct Graphnode));
    node->vertex = v;//5. node의 vertex 저장
    node->link = g->adj_list[u];//6. node의 link 저장
    g->adj_list[u] = node;//7. 그래프 g의 인접 리스트 헤더 저장
}

//인접 리스트 출력
void print(struct Graph *g) {
    for (int i = 0; i < g->n; i++) {
        struct Graphnode *p = g->adj_list[i];
        printf("정점 %d의 인접 리스트 ", i);
        while (p != NULL) {
            printf("-> %d ", p->vertex);//8. 인접한 vertex 출력
            p = p->link;//9. 다음 링크로 이동
        }
        printf("\n");
    }
}

int main() {
    struct Graph *g;
    g = (struct Graph *) malloc(sizeof(struct Graph));
    init(g);

    for (int i = 0; i < 4; i++) insert_vertex(g, i);

    insert_edge(g, 0, 1);
    insert_edge(g, 1, 0);
    insert_edge(g, 0, 2);
    insert_edge(g, 2, 0);
    insert_edge(g, 0, 3);
    insert_edge(g, 3, 0);
    insert_edge(g, 1, 2);
    insert_edge(g, 2, 1);
    insert_edge(g, 2, 3);
    insert_edge(g, 3, 2);

    print(g);

    free(g);
    return 0;
}