#include <math.h>
#include <stdio.h>

int main() {
  // Just testing the sqrt function from the math library. It returns the square root of a number. The sqrt function takes a double as an argument and returns a double. In this case, we are passing an integer to the sqrt function, which will be implicitly converted to a double before being passed to the function. The result of the sqrt function will also be a double, which will be implicitly converted back to an integer when assigned to x. This means that the value of x will be truncated to the nearest integer, which is 3 in this case.
  int x = 9;

  x = sqrt(x);

  printf("%d", x);
}
