#include <stdio.h>
#include <stdbool.h>
/*
	- �ִ����� ���ϱ�(��Ŭ���� �˰���)
		a, b�� �ִ� ������� b�� a�� b�� ���� �������� ����.
*/
/*
	a=60, b=24
	gcd(60,24) = gcd(24, 60%24) = gcd(12,24%12) = gcd(12,0) = 12
*/

//�ִ����� ����
int gcd(int a, int b)
{
	if (b == 0) //���� ����
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

	// ����� �Է�
	int x, y;
	puts("--- �� ���� �ִ������� ���մϴ� ---\n");

	printf("ù��° ������ �Է��ϼ���: ");
	scanf_s("%d", &x);

	printf("�ι�° ������ �Է��ϼ���: ");
	scanf_s("%d", &y);

	printf("�ִ������� %d�Դϴ�.\n", gcd(x, y));
	return 0;
}