#include <stdio.h>

int square(int y){
    return y * y;
}

int main(void) {

    // This is to show you that you can call a function inside a loop. In this case, we are calling the square function inside a for loop to print the squares of the numbers from 1 to 10.
    for (int x = 1; x <= 10; ++x) {
        printf("%d\n", square(x));
    }
    
    return 0;
}