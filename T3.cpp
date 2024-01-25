#include <iostream>
using namespace std;

void Matrix(int A[][100], int a, int b);
void dispmatrix(int A[][100], int a, int b);
int sum(int A[][100], int a, int b);
void rowsum(int A[][100], int a, int b);
void columnsum(int A[][100], int a, int b);
void transposeMatrix(int A[][100], int a, int b);

int main() {
    int a ,b;
    int matrix[100][100];

    cout << "Enter the number of rows (m): ";
    cin >> a;
    cout << "Enter the number of columns (n): ";
    cin >> b;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            Matrix(matrix, a, b);
            break;
        case 2:
            dispmatrix(matrix, a, b);
            break;
        case 3:
            cout << "Sum of all elements: " << sum(matrix, a, b) << endl;
            break;
        case 4:
            rowsum(matrix, a, b);
            break;
        case 5:
            columnsum(matrix, a, b);
            break;
        case 6:
            transposeMatrix(matrix, a, b);
            break;
        case 0:
            cout << "Exiting.\n";
            break;
        default:
            cout << "Invalid. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

//  input elements into the matrix
void Matrix(int A[][100], int m, int n) {
    cout << "Enter elements :\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}


// display elements of the matrix
void dispmatrix(int A[][100], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
// calculate the sum of all elements in the matrix
int sum(int A[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void transposeMatrix(int A[][100], int a, int b)
{
}
