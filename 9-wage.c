#include "stdio.h"
int main(){
    float wage, bLoan, able;
    printf("Entry with you wage: ");
    scanf("%f", &wage);
    printf("Entry with the value of the bank Loan: ");
    scanf("%f", &bLoan);
    able = wage*0.20;
    if(bLoan > able){
        printf("You're not able to receive the bank loan");
    }else{
        printf("You're able to receive the bank loan");
    }
    return 0;
}   