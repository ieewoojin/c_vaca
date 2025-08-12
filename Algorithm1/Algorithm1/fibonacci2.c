#include <stdio.h>
/*
	메모이제이션(memorization) - 어떤 문제에 대한 해답을 얻으면 그것을 메모해둔다.(계산복잡도 O(n)으로 낮아짐)
*/

int memo[50] = { 0 }; //계산 결과 저장

int fibo(int n)
{
	if (memo[n] != 0)
		return memo[n]; //이미 계산했으면 바로 반환
	if (n <= 2)
		return memo[n] = 1; //저장 후에 반환
	else
		return memo[n] = fibo(n - 2) + fibo(n - 1);
}
/*
	n=n, fibo(n)= fibo(n-2)+fibo(n-1)
	n=4, fibo(4)= fibo(2)+fibo(3)
	n=3, fibo(3)= fibo(1)+fibo(2)
	n=2, fibo(2)= 1
	n=1, fibo(1)= 1
*/

int main() {

	//printf("%d\n", fibo(4));

	puts("** 1년간 토끼의 개체수 출력 **");
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}

	return 0;
}