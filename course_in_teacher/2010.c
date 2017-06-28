#include <stdio.h>

void print_r(int a[], int n);

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    print_r(a, 5);
    return 0;
}

void print_r(int a[], int n)
{
    int *p = a + 1;
    while (p >= a)
        printf("%d\n", *p--);
}