#include <stdio.h>
typedef int element;

void sequentialSearch1(element a[], int n, int key);
#include <stdio.h>
typedef int element;

void sequentialSearch1(element a[], int n, element key)
{
	int i = 0;
	printf("\n%3d를 검색하라! ->> ", key);
	while (i < n && a[i] != key)
		i++;
	if (i < n)
		printf("%3d번째에 검색 성공! \n", i + 1);
	else
		printf("%3d번째에 검색 실패! \n", i + 1);
}
int main(void)
{
	int i;
	element a[] = {8, 30, 1, 9, 11, 19, 2};
	int size = sizeof(a) / sizeof(a[0]); // 배열 원소의 개수

	printf("\n\t<< 검색 대상 자료 >>\n");
	for (i = 0; i < size; i++)
		printf("%5d", a[i]);
	puts("");
	sequentialSearch1(a, size, 9); // 배열 a의 n개 원소 중에서 탐색키가 9인 원소 검색
	sequentialSearch1(a, size, 6); // 배열 a의 n개 원소 중에서 탐색키가 6인 원소 검색

	getchar();
	return 0;
}