#include <stdio.h>

void func(int *w, int*x, int *y, int*z);

void main()
{
    int data[3] = {3, 70, 700};
    int a, sum, *pa, *pb, *pc;
    a = 6;
    pa = &a; pb = &data[0]; pc = data + 1;
    func(data, pa, pb, pc);
    sum = data[0] + data[1] + data[2];
    printf("%d", sum);
}

void func(int *w, int*x, int *y, int*z)
{
    *w = *x + 1;
    w[1] = *(y + 1);
    *(w + 2) = z[1];
}
