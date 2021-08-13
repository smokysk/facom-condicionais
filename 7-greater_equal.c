#include "stdio.h"
int main(){
    int number_1 = 0, number_2 = 0;

    printf("Entry with the First number: ");
    scanf("%d", &number_1);
    printf("Entry with the Second number: ");
    scanf("%d", &number_2);

    if(number_1 > number_2){
        printf(" %d greater than %d\n", number_1, number_2);
    }else if(number_1 < number_2){
        printf(" %d greater than %d\n", number_2, number_1);
    }else{
        printf("egual");
    }
    return 0;
}