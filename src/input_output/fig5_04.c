#include <stdio.h>
#include <math.h>

// A function that checks which number is the largest among three numbers and returns that number. It takes three integers as parameters and returns an integer. The function uses if statements to compare the numbers and determine which one is the largest. It initializes a variable max to the value of the first number, and then compares it with the second and third numbers, updating max if a larger number is found. Finally, it returns the value of max, which is the largest number among the three.
int maximum(int x, int y, int z) {
    int max = x;


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