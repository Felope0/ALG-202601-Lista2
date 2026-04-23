#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, tentativa, tentativas = 0;

    srand(time(NULL)); // inicializa o gerador aleatório
    numero = rand() % 101; // sorteia número entre 0 e 100

    printf("Tente adivinhar o numero entre 0 e 100:\n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        tentativas++;

        if (tentativa > numero) {
            printf("o numero sorteado eh MENOR.\n");
        } 
        else if (tentativa < numero) {
            printf("o numero sorteado eh MAIOR.\n");
        } 
        else {
            printf("pabens voce acertou\n");
            printf("auantidade de tentativas: %d\n", tentativas);
        }

    } while (tentativa != numero);
    system("pause");

    return 0;
}
