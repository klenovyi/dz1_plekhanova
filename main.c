#include <stdio.h>
#include "factorial.h"

int main() {
    int number;
    number = 0;
    printf("Input number to find factorial of this number: ");
    scanf("%d", &number);

    unsigned long long result = factorial(number);
    
    if (result == 0 && number < 0) {
        printf("Факториал отрицательного числа не определен\n");
    } else {
	printf("DEV3 \n");
        printf("Факториал %d равен %llu\n", number, result);
    }


    return 0;
}
