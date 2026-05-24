#include <vector>
#include <iostream>
#include <algorithm> // For std::reverse

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits; // No carry, so we're done
        } else {
            digits[i] = 0; // Current digit becomes 0, carry over 1
        }
    }

    // If we reach here, it means all digits were 9 (e.g., [9,9,9])
    // We need to add a new leading digit '1' and all other digits are 0
    std::vector<int> result(n + 1, 0);
    result[0] = 1;
    return result;
}

int main() {
    // Example usage and testing
    std::vector<int> digits1 = {1, 2, 3};
    std::vector<int> result1 = plusOne(digits1);
    std::cout << "Test Case 1 (digits = [1,2,3]): Result: ";
    for (int digit : result1) {
        std::cout << digit << " ";
    }
    std::cout << std::endl; // Expected: 1 2 4

    std::vector<int> digits2 = {4, 3, 2, 1};
    std::vector<int> result2 = plusOne(digits2);
    std::cout << "Test Case 2 (digits = [4,3,2,1]): Result: ";
    for (int digit : result2) {
        std::cout << digit << " ";
    }
    std::cout << std::endl; // Expected: 4 3 2 2

    std::vector<int> digits3 = {9};
    std::vector<int> result3 = plusOne(digits3);
    std::cout << "Test Case 3 (digits = [9]): Result: ";
    for (int digit : result3) {
        std::cout << digit << " ";
    }
    std::cout << std::endl; // Expected: 1 0

    std::vector<int> digits4 = {9, 9, 9};
    std::vector<int> result4 = plusOne(digits4);
    std::cout << "Test Case 4 (digits = [9,9,9]): Result: ";
    for (int digit : result4) {
        std::cout << digit << " ";
    }
    std::cout << std::endl; // Expected: 1 0 0 0

    return 0;
}
