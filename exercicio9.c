#include <stdio.h>

int main() {

    float MB, mbps, min;

    printf("digite o tamanho do arquivo (MB): ");
    scanf("%f", &MB);

    printf("digite a velocidade da internet (Mbps): ");
    scanf("%f", &mbps);

    min = (MB * 8) / (mbps * 60);

    printf("tempo aproximado de download: %.2f minutos\n", min);
    system("pause");

    return 0;
}
