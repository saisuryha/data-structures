#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(array) / sizeof(array[0]);

    if (size >= 5) {
        int fifthElement = array[4];  
        printf("Name :G.J SAI SURYHA \nReg no :192210685");
        printf("\nThe fifth element is: %d\n", fifthElement);
    } else {
        printf("\nArray does not have at least 5 elements.\n");
    }
    return 0;
}
