#include <stdio.h>
#include "adjList.h"
#include <stdlib.h>
#include "adjList.h"

// 공백 그래프를 생성하는 연산
void createGraph(graphType *g)
{
	int v;
	g->n = 0; // 그래프의 정점 개수를 0으로 초기화
	for (v = 0; v < MAX_VERTEX; v++)
		g->adjList_H[v] = NULL; // 그래프의 정점에 대한 헤드 포인터 배열을 NULL로 초기화
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
int main(void)
{
	int i;
	graphType *G1 = (graphType *)malloc(sizeof(graphType));
	graphType *G2 = (graphType *)malloc(sizeof(graphType));
	graphType *G3 = (graphType *)malloc(sizeof(graphType));
	graphType *G4 = (graphType *)malloc(sizeof(graphType));

	// G1 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
	createGraph(G1);
	for (i = 0; i < 4; i++)
		insertVertex(G1, i); // G1의 정점 0~3 삽입
	insertEdge(G1, 0, 3);
	insertEdge(G1, 0, 1);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 1, 0);
	insertEdge(G1, 2, 3);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 3, 2);
	insertEdge(G1, 3, 1);
	insertEdge(G1, 3, 0);

	// G2 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
	createGraph(G2);
	for (i = 0; i < 3; i++)
		insertVertex(G2, i); // G2의 정점 0~2 삽입
	insertEdge(G2, 0, 2);
	insertEdge(G2, 0, 1);
	insertEdge(G2, 1, 2);
	insertEdge(G2, 1, 0);
	insertEdge(G2, 2, 1);
	insertEdge(G2, 2, 0);

	// G3 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.
	createGraph(G3);
	for (i = 0; i < 4; i++)
		insertVertex(G3, i); // G3의 정점 0~3 삽입
	insertEdge(G3, 0, 3);
	insertEdge(G3, 0, 1);
	insertEdge(G3, 1, 3);
	insertEdge(G3, 1, 2);
	insertEdge(G3, 2, 3);

	// G4 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.
	createGraph(G4);
	for (i = 0; i < 3; i++)
		insertVertex(G4, i); // G4의 정점 0~2 삽입
	insertEdge(G4, 0, 2);
	insertEdge(G4, 0, 1);
	insertEdge(G4, 1, 2);
	insertEdge(G4, 1, 0);

	//--- 완성된 인접 리스트 출력
	printf("\n G1의 인접 리스트");
	print_adjList(G1);

	printf("\n\n G2의 인접 리스트");
	print_adjList(G2);

	printf("\n\n G3의 인접 리스트");
	print_adjList(G3);

	printf("\n\n G4의 인접 리스트");
	print_adjList(G4);

	getchar();
	return 0;
}