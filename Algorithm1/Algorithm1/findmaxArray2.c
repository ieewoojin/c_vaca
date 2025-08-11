#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMax(int a[], int len) {
	int max = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int main()

{	//사람의 키를 입력 받아 최대값 구하기
	int number; //사람 수
	int* height; // 동적할당 - 메모리 힙 영역에 저장

	printf("사람 수 입력: ");
	scanf("%d", &number);

	height = (int*)malloc(sizeof(int) * number);
	if (height == NULL) {
		puts("메모리 할당에 실패");
		return 1;
	}

	printf("%d명의 키를 입력하세요\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf("%d", &height[i]);
	}

	printf("최대값은 %d입니다.\n",findMax(height, number));

	free(height); //메모리에서 해제
	return 0;
}
		
	

	
