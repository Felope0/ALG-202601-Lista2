#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, mmc;
    
    printf("digite os dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    if(a > b)
    mmc = a;
else
    mmc = b;
    while(1){
    if (mmc % a == 0 && mmc % b == 0){
    printf("O MMC dos numeros %d e %d eh: %d\n", a, b, mmc);
    break;
}
mmc++;
}
system("pause");
return 0;
}
