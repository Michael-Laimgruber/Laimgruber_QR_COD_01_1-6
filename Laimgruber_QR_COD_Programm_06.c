#include <stdio.h>

int main() {


    int user_answer;
    int user_input;
    float length, width, area, circumference;


    // Ask User First

    printf("Willkommen bei SuperCalc3000!\nIhr wunderbarer Konsolenrechner.\n\nWollen Sie die Flaeche oder den Umfang eines Rechtecks berechnen?\n\nTippen Sie '1' fuer Ja oder '0' fuer Nein.\n\n");
    scanf_s("%d", &user_answer);

    if (user_answer == 1)
    {
        // User  Input if yes

        printf("Sehr schoen!\n\nGeben Sie nun bitte die Laenge des Rechtecks in Zentimeter ein: ");
        scanf_s("%f", &length);
        printf("Und hier bitte die Breite des Rechtecks in Zentimeter: ");
        scanf_s("%f", &width);


        // Menu 1, 2 or 3
        printf("\nWaehlen Sie nun bitte die gewuenschte Berechnungart:\n\n");

        printf("1 - Flaeche berechnen\n");
        printf("2 - Umfang berechnen\n");
        printf("3 - Beides berechnen\n\n");
        printf("Ihre Auswahl: ");
        scanf_s("%d", &user_input);


        // Calc input - 1 OR 3 and 2 OR 3 - 3 is both

        if (user_input == 1 || user_input == 3)
        {
            area = length * width;
            printf("Die Flaeche des Rechtecks betraegt: %.2f cm2\n", area);
        }

        if (user_input == 2 || user_input == 3)
        {
            circumference = 2 * (length + width);
            printf("Der Umfang des Rechtecks betraegt: %.2f cm\n", circumference);
        }

    }


    if (user_answer == 0) {
        // User  Input if no
        printf("Schade. Dann kann ich nichts mehr fuer Sie tun. Auf Wiedersehen.\n");
    }


    return 0;
}