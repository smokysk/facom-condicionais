#include "stdio.h"
int main(){
    float height, ideal;
    char opSex;
    printf("choose 'M' for male or 'F' female to know your weight: \n");
    scanf("%c", &opSex);
    printf("Entry with your height: \n");
    scanf("%f", &height);
    if(opSex == 'M' || opSex == 'm'){
        ideal = (72.7 * height) - 58;
        printf("your ideal weight is: %.2f", ideal);
    }else if (opSex == 'F' || opSex == 'f'){
        ideal = (62.1 * height) - 44.7;
        printf("your ideal weight is: %.2fkg", ideal);
    }
    return 0;
}