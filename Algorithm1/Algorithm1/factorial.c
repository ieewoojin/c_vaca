#include <stdio.h>
/*
	곱셈 알고리즘 -> 팩토리얼(재귀)
	ex) 1부터 5까지 곱하기 1x2x3x4x5 -> 5!
*/

int gobN(int n) {

	int num = 1; //곱한 결과 값
	for (int i = 1; i <= n; i++) {
		num *= i;
	}
	return num;
}

int factorial(int n) {
	if (n <= 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int value1;
	value1 = gobN(5);
	printf("결과값:%d\n",value1);

	int a, b, c;
	a = factorial(1);
	b = factorial(3);
	c = factorial(5);

	printf("1! = %d, 3! = %d, 5! = %d\n", a, b, c);
	return 0;
}