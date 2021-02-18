//4. Write a C program to find the largest and smallest element in an array.
#include <stdio.h>
#include <string.h>
int main()
{
    int a[25], n, i = 0, m;
    printf("Enter the number you want to place inside the array\n");
    scanf("%d", &n);
    while (n != 0)
    {
        a[i] = n % 10;
        i++;
        n = n / 10;
    }
    for (int j = 0; j <= 25; i++)
    {
        if (a[j] == 0)
        {
            printf("You have entered domething wrong!!!\nPlease try again");
            goto end;
        }
        else
        {
            switch (j)
            {
            case 0:
                break;

            default:
                if (a[j] > a[j - 1])
                {
                    m = a[j];
                }
                else
                {
                    m = a[j - 1];
                }

                break;
            }
        }
    }
    printf("Greatest integer in the array is%d.", m);
end:

    return 0;
}
