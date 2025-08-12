#include <stdio.h>
#include <stdbool.h>
/*
	- 최대공약수 수하기(유클리드 알고리즘)
		a, b의 최대 공약수는 b와 a를 b로 나눈 나머지와 같다.
*/
/*
	a=60, b=24
	gcd(60,24) = gcd(24, 60%24) = gcd(12,24%12) = gcd(12,0) = 12
*/

//최대공약수 정의
int gcd(int a, int b)
{
	if (b == 0) //종료 조건
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	//printf("%d\n", gcd(4, 6));
	//printf("%d\n", gcd(1, 5));
	//printf("%d\n", gcd(24, 60));
	//printf("%d\n", gcd(81, 27));

	// 사용자 입력
	int x, y;
	puts("--- 두 수의 최대공약수를 구합니다 ---\n");

	printf("첫번째 정수를 입력하세요: ");
	scanf_s("%d", &x);

	printf("두번째 정수를 입력하세요: ");
	scanf_s("%d", &y);

	printf("최대공약수는 %d입니다.\n", gcd(x, y));
	return 0;
}