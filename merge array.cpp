#include <stdio.h>

int main() {
	printf("Name : G.J Sai Suryha \nReg no :192210685");
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int i;
    int merged[size1 + size2]; 
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    int mergedSize = size1 + size2;
    printf("\n\nMerged Array: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
