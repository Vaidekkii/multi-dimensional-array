#include <stdio.h>
int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
// Loop through rows
    for (int i = 0; i < 3; i++) {
        // Loop through columns
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  // New line after each row
    }
 return 0;
}
