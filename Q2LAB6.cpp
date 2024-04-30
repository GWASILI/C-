#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Number of rows exceeds maximum allowed. Exiting...\n";
        return 1;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Number of columns exceeds maximum allowed. Exiting...\n";
        return 1;
    }


    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }


    cout << "Enter the values for the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }


    cout << "Array values:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
