#include<stdio.h>

int main() {
    int arr[50];
    int s, i, min, max;

    printf("Enter Size of array: ");
    scanf("%d", &s);

    printf("Enter %d Elements in Array:\n", s);
    for (i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < s; i++) {  // Start from index 1, as arr[0] is already assigned to min and max
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("\nSmallest Element of Array is: %d", min);
    printf("\nBiggest Element of Array is: %d", max);

    return 0;
}
