#include <stdio.h>


/*
This program demonstrates the use of switch...case as an alternative to if...else statement.
Sometimes a program may have a series of conditions to be met which makes a standard if...else statement messy, programmers then resort it switch...case.
It is typically cleaner, easier to understand and relatively simple
*/
int main() {
    // We set day of the week to any value between 1 - 7
    int dayOfWeek = 6;

    // Initialize the switch...case
    switch(dayOfWeek) {
        // Case 1 means if if dayOfWeek = 1 it prints "It is Monday."
        case 1:
            printf("It is Monday.");
            break;
        
        // Case 2 means if if dayOfWeek = 2 it prints "It is Tuesday."
        case 2:
            printf("It is Tuesday.");
            break;
        
        // Case 3 means if if dayOfWeek = 3 it prints "It is Wednesday."
        case 3:
            printf("It is Wednesday.");
            break;
        
        // Case 4 means if if dayOfWeek = 4 it prints "It is Thursday."
        case 4:
            printf("It is Thursday.");
            break;
        
        // Case 5 means if if dayOfWeek = 5 it prints "It is Friday."
        case 5:
            printf("It is Friday.");
            break;
        
        // Case 6 means if if dayOfWeek = 6 it prints "It is Saturday."
        case 6:
            printf("It is Saturday.");
            break;
        
        // Case 7 means if if dayOfWeek = 7 it prints "It is Sunday."
        case 7:
            printf("It is Sunday.");
            break;

        /*
         If the user inputs a value not between 1 - 7 as we have defined with our cases the result will be "Invalid day of the week."
         If the value hasn't been accounted for in the cases it resorts to default
        */
        default: 
            printf("Invalid day of the week.");
            break;

        /*
         You may also be wondering why there's break; at the end of each case
         That is because if we remove break and for eample pass 6 as the day of the week, all the values before 6 will overflow 
         It will give you a result like "It is Monday. It is Tuesday. It is Wednesday. It is Thurdasy. It is Friday. It is Saturday."
        */

        return 0;

    }
}