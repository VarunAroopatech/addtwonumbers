#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // adding two numbers
    sum = num1 + num2;

    // display the sum
    printf("Sum of the entered numbers: %d", sum);

    return 0;
}
