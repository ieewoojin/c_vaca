#include <stdio.h>
#include <stdbool.h>
/*
	- �ִ����� ���ϱ�
	1. �� ���� �� ���� ���� i�� �����Ѵ�.
	2. i�� �� ���� ����� ������� Ȯ���Ѵ�.
	3. ����� ����̸� �� ���� ��� ������ �����ְ� �����Ѵ�.
	4. ����� ����� �ƴϸ� i�� 1��ŭ ���� ��Ű�� 2������ ���ư� �ݺ��Ѵ�.
*/

//�ּҰ� ����
int min(int a, int b)
{
	return (a < b) ?  a : b;
}

//�ִ����� ����
int gcd(int x, int y)
{
	int i; //�� ���� �� ���� �� ����
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