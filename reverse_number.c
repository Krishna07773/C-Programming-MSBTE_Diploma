#include<stdio.h>
void main()
{
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;      // get last digit
        rev = rev * 10 + rem;
        n = n / 10;        // remove last digit
    }

    printf("Reverse = %d", rev);
}