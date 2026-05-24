#include <vector>
#include <iostream>
#include <algorithm> // For std::swap

void moveZeroes(std::vector<int>& nums) {
    if (nums.empty()) {
        return;
    }

    int nonZeroIndex = 0; // Pointer for the next position to place a non-zero element

    // Iterate through the array
    for (size_t i = 0; i < nums.size(); ++i) {
        // If the current element is non-zero, swap it with the element at nonZeroIndex
        // and increment nonZeroIndex
        if (nums[i] != 0) {
            std::swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    std::cout << "Test Case 1 (nums = [0,1,0,3,12]): Array after moving zeroes: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1 3 12 0 0

    std::vector<int> nums2 = {0};
    moveZeroes(nums2);
    std::cout << "Test Case 2 (nums = [0]): Array after moving zeroes: ";
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 0

    std::vector<int> nums3 = {1, 0, 2, 0, 3};
    moveZeroes(nums3);
    std::cout << "Test Case 3 (nums = [1,0,2,0,3]): Array after moving zeroes: ";
    for (int num : nums3) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 0 0

    return 0;
}
