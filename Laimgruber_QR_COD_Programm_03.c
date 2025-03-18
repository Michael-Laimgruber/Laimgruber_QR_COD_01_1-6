#include <stdio.h>

int main()
{

	int number;

	printf_s("Geben Sie hier eine Zahl ein: ");
	scanf_s("%d", &number);
	printf_s("Ihre Zahl lautet: %d", number);



	return 0;
}