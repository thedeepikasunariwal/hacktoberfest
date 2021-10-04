#include <stdio.h>
int main()
{
    int n;
    printf("enter the value ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EVEN NUMBER");
    }
    else
    {
        printf("ODD NUMBER");
    }
    return 0;
}
