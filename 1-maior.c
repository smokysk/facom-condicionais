#include "stdio.h"
int main(){
    int number_1, number_2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &number_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &number_2);
    if(number_1 > number_2){
        printf("%d maior que %d \n",number_1,number_2);
    }else{
    printf("%d maior que %d \n",number_2,number_1);
    }
}