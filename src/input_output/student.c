#include <stdio.h>
#include <string.h>

// Input your age, name, gpa, and grade, and then print them out. Use scanf to read the age, gpa, and grade, and use fgets to read the name (since it can contain spaces). Make sure to handle the newline character left in the input buffer after reading the grade before using fgets to read the name.
int main() {
    int age = 0;
    char name[30];
    float gpa = 0.0f;
    char grade = '\0';

    printf("Enter your Age: ");
    scanf("%d", &age);
    
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    
    printf("Enter your Grade: ");
    scanf(" %c", &grade); // leading space skips newline

    getchar();    
    printf("Enter your Name: ");
    fgets(name, sizeof name, stdin); // reads spaces too
    name[strlen(name) - 1] = '\0';
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}