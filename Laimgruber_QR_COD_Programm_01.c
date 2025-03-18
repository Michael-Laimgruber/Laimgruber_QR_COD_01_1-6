#include <stdio.h> 

int main() {

    char name[100];

    printf("Geben Sie hier Ihren Namen ein: ");

    fgets(name, sizeof(name), stdin);

    printf("Ihr Name lautet: %s", name);

    return 0;

}