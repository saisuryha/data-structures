#include <stdio.h>
int main() {
    int rows, cols,i,j;
	printf("Name : G.J SAI SURYHA \nReg no :192210685");
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    printf("\nEnter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of rows:\n");
    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        printf("\nRow %d: %d\n", i + 1, rowSum);
    }

    printf("\nSum of columns:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        printf("\nColumn %d: %d\n", j + 1, colSum);
    }

    return 0;
}
