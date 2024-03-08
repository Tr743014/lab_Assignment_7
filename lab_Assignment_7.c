/*

Create a new git repository
git clone [your repository's url]
cd [yur repository name]

after finishing the assignment:

gid add [filename of your code's file]
git commit -m "[your commit message]"
git push

*/


#include <stdio.h>

#define ARRAY_SIZE 9

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n, int* total_swaps) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                (*total_swaps)++;
            }
        }
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n, int* total_swaps) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        (*total_swaps)++;
    }
}

int main() {

    int array1[ARRAY_SIZE] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int array2[ARRAY_SIZE] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };
    int total_swaps1_bubble = 0, total_swaps2_bubble = 0;
    int total_swaps1_selection = 0, total_swaps2_selection = 0;

    printf("array1 bubble sort:\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {

        bubbleSort(array1, ARRAY_SIZE, &total_swaps1_bubble);
        printf("%d: %d\n", array1[i], total_swaps1_bubble);
    }

    printf("%d\n", total_swaps1_bubble);

    printf("\narray2 bubble sort:\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {

        bubbleSort(array2, ARRAY_SIZE, &total_swaps2_bubble);
        printf("%d: %d\n", array2[i], total_swaps2_bubble);
    }

    printf("%d\n", total_swaps2_bubble);

    printf("\narray1 selection sort:\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {

        selectionSort(array1, ARRAY_SIZE, &total_swaps1_selection);
        printf("%d: %d\n", array1[i], total_swaps1_selection);
    }

    printf("%d\n", total_swaps1_selection);

    printf("\narray2 selection sort:\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        selectionSort(array2, ARRAY_SIZE, &total_swaps2_selection);
        printf("%d: %d\n", array2[i], total_swaps2_selection);
    }

    printf("%d\n", total_swaps2_selection);

    return 0;
}