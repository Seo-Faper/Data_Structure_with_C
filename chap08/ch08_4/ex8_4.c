#include <stdio.h>
#include "BFS.h"
#include "LinkedQueue.h"
#include "adjList.h"
#include "BFS.h"
#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"
#include <stdio.h>
#include "adjList.h"

// 공백 그래프를 생성하는 연산
void createGraph(graphType *g)
{
	int v;
	g->n = 0; // 그래프의 정점 개수를 0으로 초기화
	for (v = 0; v < MAX_VERTEX; v++)
	{
		g->adjList_H[v] = NULL; // 그래프의 정점에 대한 헤드 포인터 배열을 NULL로 초기화
		g->visited[v] = FALSE;	// 그래프의 정점에 대한 배열 visited를 FALSE로 초기화 추가!
	}
}

// 그래프 g에 정점 v를 삽입하는 연산
void insertVertex(graphType *g, int v)
{
	if (((g->n) + 1) > MAX_VERTEX)
	{
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++; // 그래프의 정점 개수 n을 하나 증가
}

// 그래프 g에 간선 (u, v)를 삽입하는 연산
void insertEdge(graphType *g, int u, int v)
{
	graphNode *node;

	// 간선 (u, v)를 삽입하기 위해 정점 u와 정점 v가 현재 그래프에 있는지 확인
	if (u >= g->n || v >= g->n)
	{
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (graphNode *)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->adjList_H[u]; // 삽입 간선에 대한 노드를 리스트의 첫 번째 노드로 연결
	g->adjList_H[u] = node;
}

// 그래프 g의 각 정점에 대한 인접 리스트를 출력하는 연산
void print_adjList(graphType *g)
{
	int i;
	graphNode *p;
	for (i = 0; i < g->n; i++)
	{
		printf("\n\t\t정점 %c의 인접 리스트", i + 65);
		p = g->adjList_H[i];
		while (p)
		{
			printf(" -> %c", p->vertex + 65); // 정점 0~3을 A~D로 출력
			p = p->link;
		}
	}
}
// 공백 연결 큐를 생성하는 연산
LQueueType *createLinkedQueue()
{
	LQueueType *LQ;
	LQ = (LQueueType *)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

// 연결 큐가 공백 상태인지 검사하는 연산
int isLQEmpty(LQueueType *LQ)
{
	if (LQ->front == NULL)
	{
		// printf(" Linked Queue is empty! ");
		return 1;
	}
	else
		return 0;
}

// 연결 큐의 rear에 원소를 삽입하는 연산
void enLQueue(LQueueType *LQ, element item)
{
	QNode *newNode = (QNode *)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;
	if (LQ->front == NULL)
	{ // 현재 연결 큐가 공백 상태인 경우
		LQ->front = newNode;
		LQ->rear = newNode;
	}
	else
	{ // 현재 연결 큐가 공백 상태가 아닌 경우
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}
}

// 연결 큐에서 원소를 삭제하고 반환하는 연산
element deLQueue(LQueueType *LQ)
{
	QNode *old = LQ->front;
	element item;
	if (isLQEmpty(LQ))
		return 0;
	else
	{
		item = old->data;
		LQ->front = LQ->front->link;
		if (LQ->front == NULL)
			LQ->rear = NULL;
		free(old);
		return item;
	}
}

// 연결 큐에서 원소를 검색하는 연산
element peekLQ(LQueueType *LQ)
{
	element item;
	if (isLQEmpty(LQ))
		return 0;
	else
	{
		item = LQ->front->data;
		return item;
	}
}

// 연결 큐의 원소를 출력하는 연산
void printLQ(LQueueType *LQ)
{
	QNode *temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp)
	{
		printf("%3d", temp->data); // 출력형식 수정
		temp = temp->link;
	}
	printf(" ] ");
}
// 그래프 g에서 정점 v에 대한 너비 우선 탐색 연산 : [알고리즘 8-2] 구현
void BFS_adjList(graphType *g, int v)
{
	graphNode *w;
	LQueueType *Q;			 // 큐
	Q = createLinkedQueue(); // 큐 생성
	g->visited[v] = TRUE;	 // 시작 정점 v에 대한 배열 값을 TRUE로 설정
	printf(" %c", v + 65);
	enLQueue(Q, v); // 현재 정점 v를 큐에 enQueue

	// 큐가 공백인 아닌 동안 너비 우선 탐색 수행
	while (!isLQEmpty(Q))
	{
		v = deLQueue(Q);
		// 현재 정점 w를 방문하지 않은 경우
		for (w = g->adjList_H[v]; w; w = w->link) // 인접 정점이 있는 동안 수행
			if (!g->visited[w->vertex])
			{ // 정점 w가 방문하지 않은 정점인 경우
				g->visited[w->vertex] = TRUE;
				printf(" %c", w->vertex + 65); // 정점 0~6을 A~G로 바꾸어 출력
				enLQueue(Q, w->vertex);
			}
	} // 큐가 공백이면 너비 우선 탐색 종료
}
int main(void)
{
	int i;
	graphType *G9;
	G9 = (graphType *)malloc(sizeof(graphType));
	createGraph(G9);
	// 그래프 G9 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
	for (i = 0; i < 7; i++)
		insertVertex(G9, i);
	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 1, 3);
	insertEdge(G9, 1, 0);
	insertEdge(G9, 2, 4);
	insertEdge(G9, 2, 0);
	insertEdge(G9, 3, 6);
	insertEdge(G9, 3, 1);
	insertEdge(G9, 4, 6);
	insertEdge(G9, 4, 2);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 6);
	insertEdge(G9, 6, 5);
	insertEdge(G9, 6, 4);
	insertEdge(G9, 6, 3);
	printf("\n G9의 인접 리스트 ");
	print_adjList(G9); // G9의 인접 리스트를 확인용으로 출력

	printf("\n\n///////////////\n\n너비 우선 탐색 >> ");
	BFS_adjList(G9, 0); // 0번 정점인 정점 A에서 너비 우선 탐색 시작

	getchar();
	return 0;
}