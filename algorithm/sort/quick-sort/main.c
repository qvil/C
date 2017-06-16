#include <stdio.h>
#include "../../../common.h"
#include "../../../common.c"

#define ARYLEN 128
#define STRLEN 64

void swap(int* array, int a, int b)
{
    printf("array : %d\n", *array);
    printf("swap start\n");
    int tmp;
    tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
    printf("swap end\n");
}

void quickSort()
{
    int number_array[] = {9,4,7,2,6};
    int pivot, left_index, right_index, array_length;
    int i;

    array_length = sizeof(number_array)/sizeof(number_array[0]);

    for(i = 0; i < array_length; i++) {
        printf("number_array[%d] : %d\n", i, number_array[i]);
    }
    printf("array_length : %d\n", array_length);
    pivot = array_length/2;
    printf("pivot : %d\n", pivot);
    printf("number_array[pivot] : %d\n", number_array[pivot]);
    left_index = 0; // first index
    printf("left_index : %d\n", left_index);
    right_index = array_length-1; // final index
    printf("right_index : %d\n", right_index);

        while (number_array[left_index] < number_array[pivot]) {
            left_index++;
            printf("left_index : %d\n", left_index);
            if (left_index >= pivot) {
                printf("swap : %d\n", left_index);
                swap(number_array, left_index, pivot);
            }
        }
        while (number_array[right_index] > number_array[pivot]) {
            right_index++;
            printf("right_index : %d\n", right_index);
            if (right_index <= pivot) {
                swap(number_array, right_index, pivot);
            }
        }
        swap(number_array, left_index, right_index);

    for(i = 0; i < array_length; i++) {
        printf("number_array[%d] : %d\n", i, number_array[i]);
    }
}

int main(void)
{
    quickSort();
    swap_int_value(1,2);

    printf("sum : %d\n", sum_int_value(2,3));


    return 0;
}
