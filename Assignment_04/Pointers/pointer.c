#include <stdio.h>

int main()
{
    int age = 25;
    int *p = &age;
    int **pp = &p;

    printf("%d,%d,%d\n", age, *p, **pp);

    (*p)++;

    printf("%d,%d\n", age, *p);

    **pp += 10;

    printf("%d,%d,%d\n", age, *p, **pp);

    int x = 50;
    *p = &x;

    printf("%d,%d,%d\n", x, *p, **pp);

    (*p) = -5;

    printf("%d,%d,%d\n", x, *p, **pp);

    printf("%d,%d\n", age, x);

    return 0;
}
