//Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
//quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
//numero  e invalido
#include "stdio.h"
#include "math.h"
int main(){
    int numero, squareRoot;
    printf("Digite um numero positivo ou negativo: ");
    scanf("%d", &numero);
    if(numero > 0){
        squareRoot = pow(numero, (0.5));
        printf("Sua raiz quadrada é: %d", squareRoot);
    }else {
        printf("numero e invalido");
    }
}