#include <stdio.h>

int main() {
	int number;


	printf("Geben Sie eine Zahl ein: ");
	scanf_s("%d", &number);

	if (number >= 99 && number <= 200) {
		printf("Ihre eingegebene Zahl liegt zwischen 99 und 200.\n");
	}
	else {
		printf("Ihre eingegebene Zahl liegt nicht zwischen 99 und 200!\n");
	}

	return 0;
}