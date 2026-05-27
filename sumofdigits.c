#include<stdio.h>
void main()
{
    int n, sum = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;    // get last digit
        sum = sum + rem;
        n = n / 10;      // remove last digit
    }

    printf("Sum of digits = %d", sum);
}