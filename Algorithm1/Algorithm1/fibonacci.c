#include <stdio.h>
/*
	피보나치 수열
	1 1 2 3 5 8 13 21 34 55 ...
*/

int fibo(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}
/*
	n=n, fibo(n)= fibo(n-2)+fibo(n-1)
	n=4, fibo(4)= fibo(2)+fibo(3)
	n=3, fibo(3)= fibo(1)+fibo(2)
	n=2, fibo(2)= 1
	n=1, fibo(1)= 1
*/

int main() {

	printf("%d\n", fibo(4));

	puts("** 1년간 토끼의 개체수 출력 **");
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}
	
	return 0;
}