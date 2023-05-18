#include <stdio.h>
#include "floyd.h"
#include <stdio.h>
#include "floyd.h"
#include "graphG.h"

// 최단 경로를 구하는 과정을 출력하는 연산
void printStep(int step)
{
	int i, j;
	printf("\n A%d : ", step);
	for (i = 0; i < MAX_VERTICES; i++)
	{
		printf("\t");
		for (j = 0; j < MAX_VERTICES; j++)
		{
			if (A[i][j] == INF)
				printf("%4c", '*');
			else
				printf("%4d", A[i][j]);
		}
		printf("\n\n");
	}
}
// [알고리즘 8-4] 구현
void Floyd_shortestPath(int n)
{
	int v, w, k, step = -1;

	for (v = 0; v < n; v++) // 초기화
		for (w = 0; w < n; w++)
			A[v][w] = weight[v][w];

	printStep(step);

	for (k = 0; k < n; k++)
	{
		for (v = 0; v < n; v++)
			for (w = 0; w < n; w++)
				if (A[v][k] + A[k][w] < A[v][w])
					A[v][w] = A[v][k] + A[k][w];
		printStep(++step);
	}
}
int main(void)
{
	int i, j;
	extern int weight[MAX_VERTICES][MAX_VERTICES];

	printf("\n ********** 가중치 인접 행렬 **********\n\n");
	for (i = 0; i < MAX_VERTICES; i++)
	{
		for (j = 0; j < MAX_VERTICES; j++)
		{
			if (weight[i][j] == INF)
				printf("%4c", '*');
			else
				printf("%4d", weight[i][j]);
		}
		printf("\n\n");
	}

	printf("\n ********* 플로이드 최단 경로 구하기 *********\n\n");
	Floyd_shortestPath(MAX_VERTICES);

	getchar();
	return 0;
}