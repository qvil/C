#include <stdio.h>

int main(void)
{
    int *pAge;

    // pAge = 100; // Segmentation fault because of direct access to address of variable.
    *pAge = 23;

    printf("pAge : %d\n", pAge); // Address
    printf("*pAge : %d\n", *pAge); // Value

    return 0;
}