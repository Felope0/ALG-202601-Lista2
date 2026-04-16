#include <stdio.h>
#include <math.h>

int main() {

    int segundos, horas, minutos, resto;
    printf("1) Digite um numero inteiro de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    resto = resto % 60;

    printf("Equivale a: %d horas, %d minutos e %d segundos\n\n", horas, minutos, resto);
    system("pause");

    return 0;
}
