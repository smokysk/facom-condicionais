#include "stdio.h"
int main(){
    int sum, number, unit, decimal, hundred, thousand;
    printf("Entry with any positive number: ");
    scanf("%d", &number);
    unit = number / 1 % 10;
    printf("%d units \n", unit);
    decimal = number / 10 % 10;
    printf("%d decimals \n",decimal);
    hundred = number / 100 % 10;
    printf("%d hundred \n", hundred);
    thousand = number / 1000 % 10;
    printf("%d thousands \n",thousand);

}
