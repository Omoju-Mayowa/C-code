#include <stdio.h>
#include <ctype.h>


int main() {
    char choice = '\0';

    printf("Temperature COnversion Program\n");
    printf("C. Celsius to Fahrenehit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celcius(C) or Fahrenheit(F): ");
    scanf(" %c", &choice);

    choice = tolower(choice);



    if(choice == 'c') {
        printf("Enter the teperature in Celcius");
    }   else if(choice == 'f') {
        printf("Enter the teperature in Celcius");
    }   else {
        printf("Invalid choice! Please select C or F.");
        scanf(" %c", &choice);
    }




}
