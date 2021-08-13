#include "stdio.h"
int main(){
    int number, sum = 0;
    printf("Entry number: \n");
    scanf("%d", &number);
    if(number>0){
        while(number>0){
            sum = sum + number % 10;
            number = number / 10;
        }
        printf("a soma dos algarismos eh: %d\n", sum);
    }else{
        printf("invalid number");
    }
    return 0;
}