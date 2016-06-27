#include <stdio.h>

int func1(int x, int y);
int func2(int n);

void main()
{
    int *b, c, d;
    int a[5] = {1, 3, 5, 7, 9};

    b = a;
    printf("*b+3 : %d\n", *b+3);
    printf("*(b+3) : %d\n", *(b+3));

    c = func1(5,3);
    printf("c : %d\n", c);
    d = func2(3);
    printf("d : %d\n", d);
}

int func1(int x, int y)
{
    int result;
    result = x%y;
    return result;
}

int func2(int n)
{
    int i;
    int result = 1;
    for (i = 0; i <= n; i++) {
        result = i;
    }
    return result;
}
