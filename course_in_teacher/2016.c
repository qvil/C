#include <stdio.h>

int mul(int first, int second)
{
    int prod;
    prod = first * second;
    return prod;
}

void main(void)
{
    int i, j, result, *q;
    int a[6] = {2,3,4,5,6,7};
    q = a;
    printf("%d\n", *(q+3));

    for (i = 0; i < 5; i++) {
        j = i + 1;
        result = mul(*(q+i), *(q+j));
        printf("%d %d %d %d\n", i, j, *(q+i), *(q+j));
        if (result >= 20) {
            break;
        }
    }
    printf("Result %d\n", result);
}
