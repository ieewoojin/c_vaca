#include <stdio.h>
/*
	���(recursive) �˰���
	- � �Լ� �ȿ��� �ڱ� �ڽ��� �θ��� ���� ����
	- �ڱ� �ڽź��� ���� �Է°����� ȣ��
*/

void func(int n) {
	if (n <= 0)
		return;
	else {
		printf("Help Me!\n");
		func(n - 1); //��� ȣ��
	}
	
}

int main()
{
	int count = 5;
	func(count);


	return 0;
}