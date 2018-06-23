#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int rows, cols, i, k = 0, l = 0;
    cout <<"Enter number of rows";
    scanf("%d",&rows);
    cout <<"Enter number of columns";
    scanf("%d",&cols);
    int matrix[rows][cols];
    cout <<"Enter the matrix";
    for( int i = 0; i < rows; i++) {
        for( int j = 0; j < cols; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
	
    // Print spiral form
    while (k < rows && l < cols) {
        // Print the first row from the remaining rows 
        for (i = l; i < cols; ++i) {
            printf("%d ", matrix[k][i]);
        }
        k++;

        // Print the last column from the remaining columns 
        for (i = k; i < rows; ++i) {
            printf("%d ", matrix[i][cols-1]);
        }
        cols--;

        // Print the last row from the remaining rows 
        if ( k < rows) {
            for (i = cols-1; i >= l; --i) {
                printf("%d ", matrix[rows-1][i]);
            }
            rows--;
        }

        // Print the first column from the remaining columns 
        if (l < cols) {
            for (i = rows-1; i >= k; --i) {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }
    return 0;
}
