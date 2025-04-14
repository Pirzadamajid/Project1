#include <stdio.h>

int main() {
    int dividend, divisor, remainder;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    remainder = dividend % divisor;
    printf("Remainder = %d\n", remainder);
    return 0;
}