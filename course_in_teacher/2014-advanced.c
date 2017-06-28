#include <stdio.h>

void func(int *w, int*x, int *y, int*z);

void main()
{
    int data[3] = {6, 60, 600};
    int a, sum, *pa, *pb, *pc;
    a = 2;
    pa = &a; pb = &data[0]; pc = data + 1;
    func(data, pa, pb, pc);
    // printf("%d\n", data[0]);
    // printf("%d\n", data[1]);
    // printf("%d\n", data[2]);
    sum = data[0] + data[1] + data[2];
    printf("%d", sum);
}

void func(int *w, int*x, int *y, int*z)
{
    *w = *x + 4;
    w[1] = *(y + 1);
    *(w + 2) = z[1];
}
