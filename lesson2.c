#include <stdio.h>

// int main() {
//     int age = 25;
//     float price = 19.99;
//     double pi = 3.1415926535;
//     char currency = '$';
//     char name[] = "Bro Code";

//     printf("%s\n", name);

//     return 0;
// }

   int add(int a, int b) {
        int c = a + b;
        return c;
    }


    int factorial(int n) {
        int i;
        int result = 1;

        for (i = 1; i <= n; i++)
        {
            result *= i;
        }
        return result;
        
    }

int main() {
    // int num1 = 1;
    // int num2= 10;
    // int num3 = 100;

    // printf("%+d\n", num1);
    // printf("%+d\n", num2);
    // printf("%+d\n", num3);


    // float price1 = 19.99;
    // float price2 = 5.52;
    // float price3 = -12.78;

    // printf("%+7.2f\n", price1);
    // printf("%+7.2f\n", price2);
    // printf("%+7.2f\n", price3);


    // int x =2;
    // int y = 22;
    // int z = 0;

    float x =2;
    float y = 22;
    float z = 0;

    // z = x + y;
    // z = x - y;
    // z = x * y;
    z = x / y;

    // printf("%d", z);
    printf("%f", z);

    int i = 0;
    // do
    // {
    //     printf("Hii\n");
    //     i++;
    //     /* code */
    // } while (i < 10);
    

    // while (i<5)
    // {
    //     /* code */
    //     printf("Hi\n   ");
    //     i++;
    // }
    

    int result2 = add(2, 3);
    printf("Result: %d\n", result2);

    int result = factorial(6);
    printf("Factorial: %d\n", result);

 
}


