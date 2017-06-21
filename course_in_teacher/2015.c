#include <stdio.h>

void func(int *, int);

int main()
{
    int k, a[5] = {10, 30, 50, 70, 90};
    func(a, 5);
    for (k = 0; k <= 4; k++) {
        printf("%d\n", a[k]);
    }
    return 0;
}

void func(int *b, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        *(b + 2) = *(b + i) + 5;
    }
}
