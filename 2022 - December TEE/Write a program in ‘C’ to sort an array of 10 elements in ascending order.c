#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // take input for array elements
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9-i; j++) {
            if (arr[j] > arr[j+1]) { // swap elements if out of order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // print sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d \n", arr[i]);
    }
    system("pause");
    return 0;
}
