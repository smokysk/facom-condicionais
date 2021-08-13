#include "stdio.h"
#include "math.h"
int main(){
    int numero;
    int squareRoot, power;
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);
    if(numero > 0){
        squareRoot = sqrt(numero);
        printf("A raiz quadrada de %d eh : %d", numero, squareRoot);
    }else{
        power = pow(numero, 2);
        printf("%d ao quadrado eh: %d", numero, power);
    }
    return 0;
}