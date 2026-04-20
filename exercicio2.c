#include <stdio.h> 
#include <stdlib.h> 
int main() {
    int a, b, c;
    float media;
    printf("digite 3 valores inteiros para calcular a media: ");
    scanf("%d %d %d", &a, &b, &c);
    
    media = (a + b +c) / 3.0;
    printf("a media dos 3 valores eh: %.2f\n", media);
    system("pause");
    
    return 0;
    }
