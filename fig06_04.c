// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    // use initializer list to initialize array n
    int n[6] = {32, 27, 64, 18, 95, 22};

    // int x = 3;
    // int y = 3;

    // printf("Pre: %d\n Post: %d\n", x++, ++y);
    // printf("New Pre: %d\n", x);
    // printf("New Post: %d\n", y);


    printf("%s%13s\n", "Element", "Value");

    // output contents of array in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%13d\n", i, n[i]);
    }
    // printf("%d\n", n[5]);
}