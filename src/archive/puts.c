#include <stdio.h>


int main() {
    int grade = 30;

    // puts is a function that prints a string followed by a newline character. It is similar to printf, but it is more efficient for printing simple strings. It does not support format specifiers like printf, so you cannot use it to print variables or formatted output. It is also faster than printf because it does not need to parse the format string or handle variable arguments.
    if (grade >= 60) {
        puts("Passed.");
    }   else {
        puts("Failed.");
    }
}