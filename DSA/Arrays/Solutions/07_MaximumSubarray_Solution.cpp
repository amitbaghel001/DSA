#include <vector>
#include <iostream>
#include <algorithm> // For std::max

int maxSubArray(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0; // Or throw an exception, depending on problem constraints
    }

    int currentMax = nums[0];
    int globalMax = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentMax = std::max(nums[i], currentMax + nums[i]);
        globalMax = std::max(globalMax, currentMax);
    }
    return globalMax;
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Test Case 1 (nums = [-2,1,-3,4,-1,2,1,-5,4]): Max Subarray Sum = " << maxSubArray(nums1) << std::endl; // Expected: 6

    std::vector<int> nums2 = {1};
    std::cout << "Test Case 2 (nums = [1]): Max Subarray Sum = " << maxSubArray(nums2) << std::endl; // Expected: 1

    std::vector<int> nums3 = {5, 4, -1, 7, 8};
    std::cout << "Test Case 3 (nums = [5,4,-1,7,8]): Max Subarray Sum = " << maxSubArray(nums3) << std::endl; // Expected: 23

    std::vector<int> nums4 = {-1, -2, -3, -4};
    std::cout << "Test Case 4 (nums = [-1,-2,-3,-4]): Max Subarray Sum = " << maxSubArray(nums4) << std::endl; // Expected: -1

    return 0;
}
