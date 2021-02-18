//1. Write a C program to calculate the sum of digits of a number.
#include <stdio.h>
int main()
{
    int num, sum = 0, n;
    printf("Enter the number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        n = num % 10;
        sum = sum + n;
        num = num / 10;
    }
    printf("Sum is %d.", sum);

    return 0;
}