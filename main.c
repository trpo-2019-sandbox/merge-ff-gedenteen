#include <stdio.h>

int min_element(int* arr, int size)
{
    int min = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, 7);

    printf("Array: ");
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
