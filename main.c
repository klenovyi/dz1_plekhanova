#include <stdio.h>
#include "factorial.h"

int main() {
    int number;

    printf("Введите число для вычисления факториала: ");
    scanf("%d", &number);

    unsigned long long result = factorial(number);
    
    if (result == 0 && number < 0) {
        printf("Факториал отрицательного числа не определен.n");
    } else {
        printf("Факториал %d равен %llun", number, result);
    }

    return 0;
}
