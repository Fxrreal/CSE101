#include <stdio.h>
#include <math.h>
int main()
{
    int a,square,square_root,check_positive_negative,check_even_odd;
    printf("Enter The Number");
    scanf("%d",&a);
    square = a * a;
    printf("The square of %d is %d\n",a, square);
    square_root = sqrt(a);
    printf("The square root of %d is %d\n",a, square_root);

    if (a > 0) {
    printf("number is positive.\n");
    } else if (a < 0) {
    printf("number is negative.\n");
    } else {
    printf("number is zero.\n");
    }
    
    if (a % 2 == 0) {
    printf("number is even.");
    } else {
    printf("number is odd.");
    }
    return 0;
}