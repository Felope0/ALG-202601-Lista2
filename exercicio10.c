#include <stdio.h>

int main() {

    int numero, i, fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for(i = numero; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d eh: %d\n", numero, fatorial);
    system("pause");

    return 0;
}
