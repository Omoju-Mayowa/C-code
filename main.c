#include <stdio.h>
#include <stdbool.h>
// Just testing printing
// int main() {

//     // This is my first program! :)

//     /*
//     This
//     is
//     also
//     a
//     comment
//     */

    
//     printf("I like pizza!\n");
//     printf("It's really good!");

//     return 0;
// }


// Variables
// int main() {
//     // variable = reusuable container for a value

//     // int variables
//     int age = 25;
//     int year = 2026;
//     int quantity = 2;
//     printf("You are %d years old\n", age);
//     printf("The year is %d\n", year);
//     printf("You have ordered %d x items\n", quantity);
    
//     // float variables
//     float gpa = 2.5;
//     // %f to print float
//     printf("Your gpa is %f\n", gpa);
//     // %.(num)f to print float with certain amount of digits after the decimal point
//     printf("Your gpa is %.1f\n", gpa);
    
    
//     // double variables
//     double pi = 3.14149263091627395723;
//     printf("The value of pi is %15lf\n", pi);

//     // char variables
//     char grade = 'A';
//     char symbol = '&';
//     printf("Your symbol is %c\n", symbol);
//     printf("Your grade is %c\n", grade);
    
//     char name[] = "John Doe";
//     printf("Hello %s\n", name);

//     return 0;
// }


// int main() {
//     bool isOnline = true;

//     if(isOnline) {
//         printf("You are Online");
//     }   else {
//         printf("You are offline");
//     }

//     return 0;
// }

// int main() {
//     int x = 10;
//     float y = 10.0;

//     if(x == y) {
//         printf("x = y");
//     } else {
//         printf("x != y");
//     }

//     return 0;
// }

int main () {
    int x = 5;

    printf("%d", x++ + ++x);

}