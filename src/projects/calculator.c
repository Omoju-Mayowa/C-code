// Alternative implementation in C
#include <stdio.h>

// Addition function
int add(float a, float b) {
    int c = a + b;
    return c;
}

// Subtraction function
int subtract(float a, float b) {
    int c = a - b;
    return c;
}

// Multiplication function
int multiply(float a, float b) {
    int c = a * b;
    return c;
}

// Division function
int divide(float a, float b) {
    if (b == 0) {
        printf("Cannot divide by 0.");
        return 0;
    }

    int c = a / b;
    return c;
}

int main() {
    // Defining the values
    float n1;
    float n2;
    float result;
    char op = '\0';

    
    printf("Welcome to calculator!\n");
    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    printf("\n Choose your operator (+, -, *, /): ");
    scanf("%s", &op);

    // Switch case to calculate the operations
    switch (op){
        case '+':
            result = add(n1, n2);
            printf("%.1f + %.1f = %.1f", n1, n2, result);
            break;
            
        case '-':
            result = subtract(n1, n2);
            printf("%.1f - %.1f = %.1f", n1, n2, result);
            break;

        case '*':
            result = multiply(n1, n2);
            printf("%.1f * %.1f = %.1f", n1, n2, result);
            break;

        case '/':
            result = divide(n1, n2);
            printf("%.1f / %.1f = %.1f", n1, n2, result);
            break;

        default:
            printf("Operation not supported Use (+, -, *, /)");
    }

    return 0;

}
