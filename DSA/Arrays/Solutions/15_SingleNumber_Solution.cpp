#include <vector>
#include <iostream>
#include <numeric> // For std::accumulate

int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR all elements
    }
    return result;
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {2, 2, 1};
    std::cout << "Test Case 1 (nums = [2,2,1]): Single number: " << singleNumber(nums1) << std::endl; // Expected: 1

    std::vector<int> nums2 = {4, 1, 2, 1, 2};
    std::cout << "Test Case 2 (nums = [4,1,2,1,2]): Single number: " << singleNumber(nums2) << std::endl; // Expected: 4

    std::vector<int> nums3 = {1};
    std::cout << "Test Case 3 (nums = [1]): Single number: " << singleNumber(nums3) << std::endl; // Expected: 1

    return 0;
}
