#include <vector>
#include <iostream>
#include <algorithm> // For std::max and std::min

struct MinMaxResult {
    int minVal;
    int maxVal;
};

MinMaxResult findMinMax(const std::vector<int>& arr) {
    if (arr.empty()) {
        // Handle empty array case, though constraints suggest N >= 1
        return {0, 0}; // Or throw an exception
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return {minVal, maxVal};
}

int main() {
    // Example usage and testing
    std::vector<int> arr1 = {3, 2, 1, 5, 4};
    MinMaxResult result1 = findMinMax(arr1);
    std::cout << "Test Case 1 (arr = [3,2,1,5,4]): Max = " << result1.maxVal << ", Min = " << result1.minVal << std::endl;

    std::vector<int> arr2 = {8, 8, 8, 8, 8};
    MinMaxResult result2 = findMinMax(arr2);
    std::cout << "Test Case 2 (arr = [8,8,8,8,8]): Max = " << result2.maxVal << ", Min = " << result2.minVal << std::endl;

    std::vector<int> arr3 = {10};
    MinMaxResult result3 = findMinMax(arr3);
    std::cout << "Test Case 3 (arr = [10]): Max = " << result3.maxVal << ", Min = " << result3.minVal << std::endl;
    
    return 0;
}
