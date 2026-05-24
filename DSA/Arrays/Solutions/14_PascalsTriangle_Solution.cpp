#include <vector>
#include <iostream>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> triangle;

    if (numRows == 0) {
        return triangle;
    }

    triangle.push_back({1}); // First row

    for (int i = 1; i < numRows; ++i) {
        std::vector<int> prevRow = triangle.back();
        std::vector<int> currentRow;

        currentRow.push_back(1); // First element of current row is always 1

        // Calculate intermediate elements
        for (size_t j = 1; j < prevRow.size(); ++j) {
            currentRow.push_back(prevRow[j - 1] + prevRow[j]);
        }

        currentRow.push_back(1); // Last element of current row is always 1
        triangle.push_back(currentRow);
    }
    return triangle;
}

int main() {
    // Example usage and testing
    int numRows1 = 5;
    std::vector<std::vector<int>> triangle1 = generate(numRows1);
    std::cout << "Test Case 1 (numRows = 5): Pascal's Triangle:" << std::endl;
    for (const auto& row : triangle1) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    int numRows2 = 1;
    std::vector<std::vector<int>> triangle2 = generate(numRows2);
    std::cout << "
Test Case 2 (numRows = 1): Pascal's Triangle:" << std::endl;
    for (const auto& row : triangle2) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    int numRows3 = 0;
    std::vector<std::vector<int>> triangle3 = generate(numRows3);
    std::cout << "
Test Case 3 (numRows = 0): Pascal's Triangle:" << std::endl;
    if (triangle3.empty()) {
        std::cout << "(empty)" << std::endl;
    }
    return 0;
}
