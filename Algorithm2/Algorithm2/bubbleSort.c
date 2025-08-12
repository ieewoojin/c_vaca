#include <stdio.h>
/*
	버블 정렬
	- 배열에서 인접한 두 개의 요소를 비교하여 자리를 바꾸는 방식
	- 요소의 개수가 n개인 배열에서 n-1회 비교하고 교환함
*/



int main()
{
	int arr[] = { 41,7,32,77,14 };
	int i, j, tmp;

	// 비교와 교환 반복하기
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) { //열의 요소 비교
			if (arr[j] > arr[j + 1]) { //앞 요소가 뒤 요소보다 크면
				tmp = arr[j]; //자리 바꿈 - 오름차순 정렬
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	// 출력
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

}