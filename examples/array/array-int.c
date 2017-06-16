#include <stdio.h>

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("%d\n", array[0]); // 1
    printf("%d\n", array[1]); // 2
    printf("%d\n", array[2]); // 3
    printf("%d\n", array[3]); // 4
    printf("%d\n", array[4]); // 5

    printf("%d\n", *array); // 1
    printf("%d\n", *array+1); // 2
    printf("%d\n", *array+2); // 3
    printf("%d\n", *array+3); // 4
    printf("%d\n", *array+4); // 5

    return 0;
}