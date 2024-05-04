#include <iostream>
#include <string>
using namespace std;

void matrixMultiplication(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    int rows = 3;
    int cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            result[i][j] = matrix1[i][0] * matrix2[0][j] + matrix1[i][1] * matrix2[1][j] + matrix1[i][2] * matrix2[2][j];
        }
    }
}

int main()
{
    int rows = 3;
    int cols = 3;
    int matrix1[3][3];
    int matrix2[3][3];
    // Input values into the array
    cout << "Enter matrix 1 of size 3*3:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter value for position (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }
    cout << endl;
    // Input values into the array
    cout << "Enter matrix 2 of size 3*3:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter value for position (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }
    int result[3][3];
    matrixMultiplication(matrix1, matrix2, result);
    cout << "The resultant matrix is:" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        // Loop over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            // Print the character followed by a space
            cout << result[i][j] << ' ';
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}