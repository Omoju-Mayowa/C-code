#include <stdio.h>
#include <string.h>


/* This is a simple shopping cart program that prompts the user to enter an item, its price, and the quantity they want to purchase. 
It then calculates the total cost and prints it out. The program uses fgets to read the item name (which can contain spaces) and scanf to read the price and quantity.
After reading the item name, it removes the newline character that fgets adds at the end of the string.
Finally, it prints out the total cost in a formatted manner.
*/
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