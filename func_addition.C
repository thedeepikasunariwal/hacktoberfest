#include <stdio.h>
int add();
int main()
{
    int sum;
    printf("program to print addition of two number");
    sum = add();
    printf("addition =%d", sum);
}
int add()
{
    int a, b, c;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    c = a + b;
    return c;
}
