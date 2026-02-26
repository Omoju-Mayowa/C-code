#include <stdio.h>
#include <math.h>

int maximum(int x, int y, int z) {
    int max = x;

    // int random = random

    if(y > max) {
        max = y;
    }

    if(z > max) {
        max = z;
    }
    return max;
}

int main(void) {
    int number1;
    int number2;
    int number3;

    printf("%s", "Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    printf("Maximum: %d\n", maximum(number1, number2, number3));
}