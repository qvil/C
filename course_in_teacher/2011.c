#include <stdio.h>

int main(void)
{
    int score[10] = {1,2,3,4,5};
    int i, op=2, sum=0;

    switch (op) {
        case 1:
            for (i = 0; i < 10; i++)
                sum += score[i];
            printf("sum : %d\n", sum);
            break;
        case 2:
            for (i = 3; i < 10; i++)
                sum += score[i];
            printf("sum : %d\n", sum);
        default:
            for (i = 5; i < 10; i++)
                sum += score[i];
            printf("sum : %d\n", sum);
            break;
    }
    return 0;
}
