#include <stdio.h>
int main()
{
    int n, i, temp = 0;
    printf("enter  any number\n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }
    else
    {
        if (temp == 0)
        {
            printf("%d number is prime\n", n);
        }

        else
        {
            printf("%d is not prime number\n", n);
        }
    }
    return 0;
}
