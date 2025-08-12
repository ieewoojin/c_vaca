#include <stdio.h>

void printBin(int a) 
{
	if (a == 0 || a == 1)
		printf("%d", a);
	else {
		printBin(a / 2); //¸ò
		printf("%d\", a%2); //³ª¸ÓÁö
	}
}


int main()
{
	int x = 11;

	printBin(x);

	return 0;
}