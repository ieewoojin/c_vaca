#include <stdio.h>
#include <stdbool.h>
/*
	- 최대공약수 수하기
	1. 두 수중 더 작은 값을 i에 저장한다.
	2. i가 두 수의 공통된 약수인지 확인한다.
	3. 공통된 약수이면 이 값을 결과 값으로 돌려주고 종료한다.
	4. 공통된 약수가 아니면 i를 1만큼 감소 시키고 2번으로 돌아가 반복한다.
*/

//최소값 정의
int min(int a, int b)
{
	return (a < b) ?  a : b;
}

//최대공약수 정의
int gcd(int x, int y)
{
	int i; //두 수중 더 작은 수 저장
	i = min(x, y);
	
	while (true) {
		if (x % i == 0 && y % i == 0)
			return i;
		i--; 
	}
}

int main()
{
	printf("%d\n",gcd(4, 6));
	printf("%d\n",gcd(1, 5));
	printf("%d\n",gcd(24,60));

	return 0;
}