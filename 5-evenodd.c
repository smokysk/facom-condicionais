#include "stdio.h"
int main(){
    int numero;
    printf("Entry with any number to know if its even or odd");
    scanf("%d", &numero);
    if(numero%2 == 0){
        printf("is even");
    }else{
        printf("is odd");
    }
}