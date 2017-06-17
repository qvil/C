#include <stdio.h>

// void func(int *w, int*x, int *y, int*z);
// int sum(int a, int b);

int sum(int a, int b);

int main(void)
{
    int c = 10;
    int d = 20;
    int result;

    result = sum(c, d);

    printf("%d\n", result);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
// argument = 인수;
// parameter = 인자;



// void func(int *w, int*x, int *y, int*z)
// {
//     *w = *x + 1;
//     w[1] = *(y + 1);
//     *(w + 2) = z[1];
// }