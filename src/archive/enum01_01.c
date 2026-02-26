#include <stdio.h>


int main(void) {
    // This is enum
    // It works by assigning and integer to a string.
    // By default, the first string is assigned the value of 0, and each subsequent string is assigned the value of the previous string plus 1. You can also assign specific values to the strings in the enum, but if you do not assign a value to a string, it will be assigned the value of the previous string plus 1.
    enum Day {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY
    };

    printf("%d\n", FRIDAY);
}