#include <stdio.h>

void obliczBMI() {
    float waga, wzrost, bmi;

    printf("Podaj swoją wagę (kg): ");
    scanf("%f", &waga);

    printf("Podaj swój wzrost (cm): ");
    scanf("%f", &wzrost);

    wzrost = wzrost / 100.0; // zamiana na metry

    if (wzrost <= 0 || waga <= 0) {
        printf("Coś poszło nie tak... Sprawdź dane \n");
        return;
    }

    bmi = waga / (wzrost * wzrost);

    printf("\nTwoje BMI wynosi: %.2f\n", bmi);

    if (bmi < 16)
        printf("Wygłodzenie \n");
    else if (bmi < 17)
        printf("Wychudzenie \n");
    else if (bmi < 18.5)
        printf("Niedowaga \n");
    else if (bmi < 25)
        printf("Waga prawidłowa \n");
    else if (bmi < 30)
        printf("Nadwaga \n");
    else if (bmi < 35)
        printf("Otyłość I stopnia \n");
    else if (bmi < 40)
        printf("Otyłość II stopnia (duża) \n");
    else
        printf("Otyłość III stopnia (skrajna) \n");
}

int main() {
    printf("=== KALKULATOR BMI ===\n");
    obliczBMI();
    return 0;
}
