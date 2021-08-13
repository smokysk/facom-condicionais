#include "stdio.h"
int main(){
    float note_1, note_2, result, average;

    printf("Entry with the First note: ");
    scanf("%f", &note_1);
    printf("Entry with the Second note: ");
    scanf("%f", &note_2);

    if((note_1 >= 0 && note_1 <=10) && (note_2 >= 0 && note_2 <=10)){
        average = (note_1 + note_2)/2;
        printf("the average is: %.2f", average);
    }else{
        printf("Wrong inputs");
    }
    return 0;
}