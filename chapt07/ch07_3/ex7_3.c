#include <stdio.h>
#include "threadBT.h"
#include <stdio.h>
#include <stdlib.h>
#include "threadBT.h"

// data를 루트 노드로 하여 왼쪽 서브 트리와 오른쪽 서브 트리를 연결하는 연산
treeThNode *makeRootThNode(char data, treeThNode *leftNode, treeThNode *rightNode, int isThreadRight)
{
	treeThNode *root = (treeThNode *)malloc(sizeof(treeThNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	root->isThreadRight = isThreadRight;
	return root;
}

// 후속자 노드를 반환하는 연산
treeThNode *findThreadSuccessor(treeThNode *p)
{
	treeThNode *q = p->right;
	if (q == NULL)
		return q;
	if (p->isThreadRight == 1)
		return q;
	while (q->left != NULL)
		q = q->left;
	return q;
}

// 스레드 이진 트리의 중위 순회
void threadInorder(treeThNode *root)
{
	treeThNode *q;
	q = root;
	while (q->left)
		q = q->left;
	do
	{
		printf("%3c", q->data);
		q = findThreadSuccessor(q);
	} while (q);
}
int main(void)
{
	// (A*B-C/D) 수식 이진 트리 만들기
	treeThNode *n7 = makeRootThNode('D', NULL, NULL, 0);
	treeThNode *n6 = makeRootThNode('C', NULL, NULL, 1);
	treeThNode *n5 = makeRootThNode('B', NULL, NULL, 1);
	treeThNode *n4 = makeRootThNode('A', NULL, NULL, 1);
	treeThNode *n3 = makeRootThNode('/', n6, n7, 0);
	treeThNode *n2 = makeRootThNode('*', n4, n5, 0);
	treeThNode *n1 = makeRootThNode('-', n2, n3, 0);

	n4->right = n2;
	n5->right = n1;
	n6->right = n3;

	printf("\n 스레드 이진 트리의 중위 순회 : ");
	threadInorder(n1);

	getchar();
	return 0;
}