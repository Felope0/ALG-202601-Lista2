#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;
    
    printf("digite uma letra para descobrir se ela eh vogal ou consoante: ");
    scanf("%c", &letra);
    
    if(letra == 'a' || letra== 'e' || letra== 'i' || letra== 'o' || letra== 'u' || letra == 'A' || letra== 'E' || letra== 'I' || letra== 'O' || letra== 'U'){
    printf("Esta letra eh uma vogal");
}
    else {
    printf("Esta letra eh uma consoante");
}
system("pause");

return 0;
}
    
    
