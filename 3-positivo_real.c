#include "stdio.h"
#include "math.h"
int main(){
    float numero;
    int squareRoot, power;
    printf("Digite um numero qualquer: ");
    scanf("%f", &numero);
    if(numero > 0){
        squareRoot = sqrt(numero);
        printf("A raiz quadrada de %.2f eh : %d", numero, squareRoot);
    }else{
        power = pow(numero, 2);
        printf("%.2f ao quadrado eh: %d", numero, power);
    }
    return 0;
}