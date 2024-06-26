#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter the row of Matrix 1 : ");
    scanf("%d", &row1);
    printf("Enter the column of Matrix 1 : ");
    scanf("%d", &col1);
    printf("Enter the row of Matrix 2 : ");
    scanf("%d", &row2);
    if(row2 != col1) {
        printf("Column of Matrix 1 and Row of Matrix 2 must be Equal\n");
        return 0;
    }
    printf("Enter the column of Matrix 2 : ");
    scanf("%d", &col2);

    int M1[row1][col1];
    int M2[row2][col2];
    int R[row1][col2];

    printf("Enter the Values of Matrix 1 : \n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Enter the Values of Matrix 2 : \n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            scanf("%d", &M2[i][j]);
        }
    }

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            R[i][j] = 0;
            for(int k = 0; k < col1; k++) {
                R[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    
    printf("Resultant Matrix is : \n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
