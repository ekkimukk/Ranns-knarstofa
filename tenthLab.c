#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct goods {
    char goodName[10];
    int goodDate;
    float goodPrice;
} goods;

void input(goods *good) {
    printf("Name of good: ");               scanf("%9s", good[0].goodName);

    printf("Number of months of good: ");   scanf("%d", &good[0].goodDate);
   
    printf("Price of good: ");              scanf("%f", &good[0].goodPrice);

    printf("------------------------------------------------------\n");
}

void output(goods *good, int extremeMonth, float percent) {
    if (good[0].goodDate > extremeMonth) {
        printf("Name of good: %s\n", good[0].goodName);
        float newPrice = good[0].goodPrice - (good[0].goodPrice*percent);
        printf("Price of good: %f\n", newPrice);
        printf("------------------------------------------------------\n");
    }
    else {
        printf("Du är en dåre");
    }
    
}

int main() {
    int extremeMonth;
    float percent;

    printf("Enter extreme month: ");
    scanf("%d", &extremeMonth);
    printf("Enter the discount percentage in decimal fraction: ");
    scanf("%f", &percent);
    printf("------------------------------------------------------\n");

    //struct goods *good;
    struct goods *good = (goods*)malloc(sizeof(goods));
    
    input(good);
    output(good, extremeMonth, percent);
    return 0;
}
