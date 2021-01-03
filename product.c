#include <stdio.h>
int main()
{
    float num1, num2, product;
    printf("Enter a num:");
    scanf("%f", &num1);

    printf("Enter a num:");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("Product of given inputtes numbers is %.3f", product);
    return 0;
}
