#include <stdio.h>

int main(void)
{
    int *pa;
    int b = 10;
    int array[4] = { 1, 3, 5, 7 };
    int i;

    pa = array;
    // array[0] = 5;

    for(i = 0; i < 3; i++) {
        // array[i] = i;
        printf("%d\n", *((pa + 1) + i));
    }
    
    
    return 0;
}