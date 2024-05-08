#include <iostream>
#include <vector>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows (max 3): ";
    std::cin >> rows;
    if (rows > 3) {
        std::cout << "Number of rows exceeds maximum allowed. Exiting...\n";
        return 1;
    }

    std::cout << "Enter the number of columns (max 3): ";
    std::cin >> cols;
    if (cols > 3) {
        std::cout << "Number of columns exceeds maximum allowed. Exiting...\n";
        return 1;
    }

    std::vector<std::vector<double>> arr(rows, std::vector<double>(cols));

    std::cout << "Enter the values for the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Array values:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
