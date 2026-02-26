#include <stdio.h>

int main(void) {
    int a;
    int b = 0;
    int c = 0;


    // This it to show you that you can ignore certain inputs by using an asterisk * in the format string of scanf. This is useful when you want to read and discard certain values from the input.
    printf("Enter 3 integers: ");
    scanf("%*d %*d %d", &a);


    printf("You entered: %d, %d, %d\n", a, b, c);
}