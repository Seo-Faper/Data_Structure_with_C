#include <stdio.h>
#include <stdio.h>

int i = 0; // łoÁ¤ˇÄ ´Ü°č ĂâˇÂżë şŻźö

// ÁÖžîÁř şÎşĐÁýÇŐ žČżĄź­ ÇÇşżŔÇ Ŕ§ÄĄ¸Ś ČŽÁ¤ÇĎżŠ şĐÇŇ Ŕ§ÄĄ¸Ś Á¤ÇĎ´Â żŹťę
int partition(int a[], int begin, int end, int size)
{
	int pivot, L, R, t, temp;
	L = begin;
	R = end;
	pivot = (begin + end) / 2; // Áß°ŁżĄ Ŕ§ÄĄÇŃ żřźŇ¸Ś ÇÇşż żřźŇˇÎ źąĹĂ
	printf("\n [%d 단계 : pivot = %d ] \n", ++i, a[pivot]);
	while (L < R)
	{
		while ((a[L] < a[pivot]) && (L < R))
			L++;
		while ((a[R] >= a[pivot]) && (L < R))
			R--;
		if (L < R)
		{ // L°ú R żřźŇŔÇ ŔÚ¸Ž ąłČŻ
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
			// LŔĚ ÇÇşżŔÎ °ćżě, şŻ°ćľČ ÇÇşżŔÇ Ŕ§ÄĄ(R)¸Ś ´Ů˝Ă ŔúŔĺ!
			if (L == pivot)
				pivot = R;
		} // if(L<R)
	}	  // while(L<R)
	// (L=R)ŔĚ ľČ °ćżě,
	// ´ő ŔĚťó ÁřÇŕÇŇ źö žřŔ¸šÇˇÎ R żřźŇżÍ ÇÇşż żřźŇŔÇ ŔÚ¸Ž¸Ś ąłČŻÇĎżŠ ¸śšŤ¸Ž
	temp = a[pivot];
	a[pivot] = a[R];
	a[R] = temp;
	for (t = 0; t < size; t++)
		printf("%4d", a[t]); // ÇöŔçŔÇ Á¤ˇÄ ťóĹÂ ĂâˇÂ
	printf("\n");
	return R; // Á¤ˇÄľÇžî ČŽÁ¤ľČ ÇÇşżŔÇ Ŕ§ÄĄ šÝČŻ
}

void quickSort(int a[], int begin, int end, int size)
{
	int p;
	if (begin < end)
	{
		p = partition(a, begin, end, size); // ÇÇşżŔÇ Ŕ§ÄĄżĄ ŔÇÇŘ şĐÇŇ Ŕ§ÄĄ °áÁ¤
		quickSort(a, begin, p - 1, size);	// ÇÇşżŔÇ żŢÂĘ şÎşĐÁýÇŐżĄ ´ëÇŘ Äü Á¤ˇÄŔť ŔçąÍČŁĂâ
		quickSort(a, p + 1, end, size);		// ÇÇşżŔÇ żŔ¸ĽÂĘ şÎşĐÁýÇŐżĄ ´ëÇŘ Äü Á¤ˇÄŔť ŔçąÍČŁĂâ
	}
}
void quickSort(int a[], int begin, int end, int size);

int main(void)
{
	int list[8] = {69, 10, 30, 2, 16, 8, 31, 22}, i = 0;
	int size = sizeof(list) / sizeof(list[0]); // list 배열의 원소 개수
	printf("\n정렬할 원소 : ");
	for (i = 0; i <= size - 1; i++)
		printf(" %d", list[i]);
	printf("\n\n<<<<<<<<<< 퀵 정렬 수행 >>>>>>>>>>\n");
	quickSort(list, 0, size - 1, size); // 퀵 정렬 함수 호출

	getchar();
	return 0;
}