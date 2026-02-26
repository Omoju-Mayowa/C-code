#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter 3 integers: ");
    scanf("%*d %*d %d", &a);


    printf("You entered: %d, %d, %d\n", a, b, c);
}