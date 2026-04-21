#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    
    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if(a>=b && a>=c){
    if(b>=c){
    printf("os numeros decrescentes sao: %f %f %f", a, b, c);
}
    else{
    printf("os numeros decrescentes sao: %f %f %f", a, c, b);
}
}
else if(b>=a && b>=c){
         if(a>=c){
         printf("os numeros decrescentes sao: %f %f %f", b, a, c);
         }
         else{
              printf("os numeros decrescentes sao: %f %f %f", b, c, a);
              }
              }
         else{
         if(a>=b){
         printf("os numeros decrescentes sao: %f %f %f", c, a, b);
         }
         else{
              printf("os numeros decrescentes sao: %f %f %f", c, b, a);
              }
              }
  system("PAUSE");	
  return 0;
}
