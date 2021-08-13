#include "stdio.h"
#include "math.h"
int main(){
    int number, logaritm;
    printf("Entry with a number: \n");
    scanf("%d", &number);
    if(number > 0){
        logaritm = log(number);
        printf("%d", logaritm);
    }else{
        printf("Numero invalido");
    }
    return 0;
}