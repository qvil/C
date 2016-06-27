#include <stdio.h>

int cal_first(void)
{
    int k = 0, p = 0;
    do {
        p = p + k;
        ++k;
    } while(k < 10);
    return p;
}

int cal_second(void)
{
    int k = 1, p = 0;
    while (k < 10) {
        p = p+ k;
        k += 2;
    }
    return p;
}

void main()
{
    int a = 0, b = 0, i, result;
    int M[4] = {2, 3, 5, 7};

    for (i = 0; i <= 3; i++) a += M[i];
    b = a % 4;
    if (b < 2) result = cal_first();
    else result = cal_second();
    printf("%d \t %d\n", b, result);
}
