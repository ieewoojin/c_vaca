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

{	//����� Ű�� �Է� �޾� �ִ밪 ���ϱ�
	int number; //��� ��
	int* height; // �����Ҵ� - �޸� �� ������ ����

	printf("��� �� �Է�: ");
	scanf("%d", &number);

	height = (int*)malloc(sizeof(int) * number);
	if (height == NULL) {
		puts("�޸� �Ҵ翡 ����");
		return 1;
	}

	printf("%d���� Ű�� �Է��ϼ���\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf("%d", &height[i]);
	}

	printf("�ִ밪�� %d�Դϴ�.\n",findMax(height, number));

	free(height); //�޸𸮿��� ����
	return 0;
}
		
	

	
