#include <stdio.h>

int get_integer(const char* message);
int factorial(int n);
int combination(int n, int r);

int main(void)
    {
        int n, r, result;

        n = get_integer("Enter the value of n : ");
        r = get_integer("Enter the value of r : ");

        result = combination(n, r);

        printf("C(%d, %d) = %d\n", n, r, result);

        return 0;
    }

int get_integer(const char* message)
    {
        int value;
        printf("%s", message);
        scanf("%d", &value);

        return value;
    }

int factorial(int n)
    {
        int res = 1;
        int i;
        for (i = 1; i <= n; i++)
            {
                res *= i;
            }

        return res;
    }

int combination(int n, int r)
    {
        return factorial(n) / (factorial(n - r) * factorial(r));
    }