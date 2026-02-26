#include <stdio.h>
#include <string.h>


int main() {

    // Shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item do you want to get?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    
    printf("What is the price of the item?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("The total for %d %s is %c%f", quantity, item, currency , total);

    return 0;
}