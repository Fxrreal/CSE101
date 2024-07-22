#include <stdio.h>
#include <math.h>

int main() {
  double number, n;

  printf("Enter a number:");
  scanf("%lf", &number);
  printf("Enter the value of n (root):");
  scanf("%lf", &n);

  if (n < 0 && fmod(n, 2) != 0 && number < 0) {
    // Handling complex roots for negative numbers.
    printf("Complex roots are not supported for this input.\n");
  } else {
    double result = pow(number, 1.0 / n);
    printf("%lfth root of %lf is : %f\n", n, number, result);
  }

  return 0;
}