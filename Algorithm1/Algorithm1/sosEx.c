#include <stdio.h>
/*
	재귀(recursive) 알고리즘
	- 어떤 함수 안에서 자기 자신을 부르는 것을 말함
	- 자기 자신보다 작은 입력값으로 호출
*/

void func(int n) {
	if (n <= 0)
		return;
	else {
		printf("Help Me!\n");
		func(n - 1); //재귀 호출
	}
	
}

int main()
{
	int count = 5;
	func(count);


	return 0;
}