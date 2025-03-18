#include <stdio.h>

int main()
{

	int number;

	printf_s("Geben Sie hier eine Zahl ein: ");
	scanf_s("%d", &number);

	if (number < 100) {
		printf_s("Eingegebene Zahl ist kleiner als 100\n");
	}

	else if (number == 100) {
		printf_s("Eingegebene Zahl ist exakt 100\n");
	}

	else {
		printf_s("Eingegebene Zahl ist groesser als 100\n");
	}



	return 0;
}