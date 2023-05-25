#include <stdio.h>
#include <stdio.h>
void bubbleSort(int a[], int size)
{
	int i, j, t, temp;

	for (i = size - 1; i > 0; i--)
	{
		printf("\n %d 단계 >>", size - i);
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++)
				printf("%3d ", a[t]);
		}
	}
}
void bubbleSort(int a[], int size);

int main(void)
{
	int i, list[8] = {69, 10, 30, 2, 16, 8, 31, 22}; // 정렬할 원소
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++)
		printf("%d ", list[i]); // 정렬 전의 원소 출력
	printf("\n\n<<<<<<<<<< 버블 정렬 수행 >>>>>>>>>>\n");
	bubbleSort(list, size); // 버블 정렬 함수 호출

	getchar();
	return 0;
}