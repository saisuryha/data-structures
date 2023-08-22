#include <stdio.h>
void bubbleSort(int arr[], int size) {
	printf("Name : G.J SAI SURYHA \nReg no :192210685");
	int i,j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int numbers[] = {5, 2, 8, 1, 9, 3},i,j;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    bubbleSort(numbers, size);
    printf("\nAscending Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    for (i = 0; i < size / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }
    printf("\nDescending Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
