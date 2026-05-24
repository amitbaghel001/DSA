#include <vector>
#include <iostream>
#include <cmath> // For std::abs

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    int n = nums.size();

    // Mark visited numbers by negating the element at the corresponding index
    for (int i = 0; i < n; ++i) {
        int index = std::abs(nums[i]) - 1; // Get the 0-based index
        if (nums[index] > 0) { // If not already negative
            nums[index] *= -1; // Mark as seen
        }
    }

    // Collect the disappeared numbers
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) { // If the element is still positive, its index+1 was not seen
            result.push_back(i + 1);
        }
    }
    return result;
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> result1 = findDisappearedNumbers(nums1);
    std::cout << "Test Case 1 (nums = [4,3,2,7,8,2,3,1]): Disappeared numbers: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 5 6

    std::vector<int> nums2 = {1, 1};
    std::vector<int> result2 = findDisappearedNumbers(nums2);
    std::cout << "Test Case 2 (nums = [1,1]): Disappeared numbers: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 2

    std::vector<int> nums3 = {1, 2, 3};
    std::vector<int> result3 = findDisappearedNumbers(nums3);
    std::cout << "Test Case 3 (nums = [1,2,3]): Disappeared numbers: ";
    for (int num : result3) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: (empty)

    return 0;
}
