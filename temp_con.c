#include <stdio.h>
#include <ctype.h>


int main() { 
    char choice = '\0';
    float celsius = 0.00;
    float fahrenheit = 0.00;

    printf("Temperature COnversion Program\n");
    printf("C. Celsius to Fahrenehit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celcius(C) or Fahrenheit(F): ");
    scanf(" %c", &choice);

    choice = tolower(choice);



    if(choice == 'c') {
        printf("Enter the teperature in Celcius: ");
        scanf("%f", &celsius);

        fahrenheit = ((celsius * 9/5) + 32);
        // printf("%7.1f\n", celsius);
        printf("%.1fºC in Fahrenheit is %.1fºF\n", celsius, fahrenheit);
        
    }   else if(choice == 'f') {
        printf("Enter the teperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = ((fahrenheit - 32) * 5/9);

        printf("%.1fºF in Celsuis is %.1fºC", fahrenheit, celsius);
    }   else {
        printf("Invalid choice! Please select C or F.");
        scanf(" %c", &choice);
    }



}

