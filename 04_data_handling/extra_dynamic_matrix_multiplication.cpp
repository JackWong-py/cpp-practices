//**Dynamic Matrix Multiplication**
//
//Goal: Multiply two matrices using dynamically allocated 2D arrays.
//
//Steps:
//
//Ask the user for matrix dimensions:
//
//Matrix A: rowsA × colsA
//
//Matrix B: rowsB × colsB (must satisfy colsA == rowsB)
//
//Dynamically allocate both matrices and a result matrix.
//
//Fill both with user input or random numbers.
//
//Multiply them:
//
//result[i][j] = Σ (A[i][k] * B[k][j])
//
//Print the result.
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_matrix(int* matrix[], int rows, int cols);

int main()
{
    cout << "This program multiply two matrices using dynamically alocated 2D arrays. " << endl;

    int rows_A, cols_A, rows_B, cols_B;

    cout << "---- Matrix A ----\n";
    cout << "Number of row: " << endl;
    cin >> rows_A;
    cout << "Number of column: " << endl;
    cin >> cols_A;

    cout << "---- Matrix B ----\n";
    cout << "Number of row: " << endl;
    cin >> rows_B;
    cout << "Number of column: " << endl;
    cin >> cols_B;

    if (cols_A != rows_B)
    {
        cout << "Invalid multiplication of matrices! \n";
        cout << "Must statisfy column A = row B. \n";
        return 1;
    }
    //Create matrix A with row A x col A.
    int** matrix_A = new int* [rows_A];//Create an array of pointer with size number of row.
    for (int i = 0; i < rows_A; i++)
    {
        matrix_A[i] = new int [cols_A];//Pointer point to each array with size number of column.
    }

    //Create matrix B with row B x col B.
    int** matrix_B = new int* [rows_B];//Create an array of pointer with size number of row.
    for (int i = 0; i < rows_B; i++)
    {
        matrix_B[i] = new int [cols_B];//Pointer point to each array with size number of column.
    }

    uniform_int_distribution<>dist(1, 10);
    int random_number;
    //Alocate random number into Matrix.
    //Matrix A
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            random_number = dist(gen);
            matrix_A[i][j] = random_number;
        }
    }
    //Matrix B
    for (int i = 0; i < rows_B; i++)
    {
        for (int j = 0; j < cols_B; j++)
        {
            random_number = dist(gen);
            matrix_B[i][j] = random_number;
        }
    }
    cout << "---- Matrix A ----\n";
    display_matrix(matrix_A, rows_A, cols_A);
    cout << "---- Matrix A ----\n";
    display_matrix(matrix_B, rows_B, cols_B);

    //Create a matrix C.
    //Matrix C = rows_A x cols B
    int** matrix_C = new int* [rows_A];
    int element_C = 0;
    for (int i = 0; i < rows_A; ++i)
    {
        matrix_C[i] = new int [cols_B];
    }

    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_B; j++)
        {
            matrix_C[i][j] = 0;
            for (int k = 0; k < cols_A; k++)
            {
                matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    cout << "--- Result: Matrix A x Matrix B ---\n";
    display_matrix(matrix_C, rows_A, cols_B);

    //Delete matrix A with row A x col A.
    for (int i = 0; i < rows_A; i++)
    {
        delete [] matrix_A[i];//Delete all the pointer of each array with size number of column.
    }
    delete [] matrix_A;

    //Delete matrix B with row B x col B.
    for (int i = 0; i < rows_B; i++)
    {
        delete [] matrix_B[i];//Delete all the pointer of each array with size number of column.
    }
    delete [] matrix_B;

    //Delete matrix C with row A x col B.
    for (int i = 0; i < rows_A; i++)
    {
        delete [] matrix_C[i];//Delete all the pointer of each array with size number of column.
    }
    delete [] matrix_C;
    return 0;
}
void display_matrix(int* matrix[], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (j != 0)
            {
                cout << ", ";
            }
            cout << matrix[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}
