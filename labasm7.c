#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size, int swaps[]) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps[j]++;
                swaps[j + 1]++;
            }
        }
    }
}

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(array) / sizeof(array[0]);
    int* swaps = malloc(sizeof(int) * size);
    int i;

    // Initialize swaps array
    for (i = 0; i < size; i++) {
        swaps[i] = 0;
    }

    // Perform Bubble Sort and count swaps
    bubbleSort(array, size, swaps);

    // Print the number of swaps for each index
    printf("Number of swaps for each index:\n");
    for (i = 0; i < size; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }

    free(swaps); // Free the dynamically allocated memory

    return 0;
}
