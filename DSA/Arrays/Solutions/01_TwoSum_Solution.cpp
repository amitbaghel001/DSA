#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {}; // Should not reach here based on problem constraints
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    std::cout << "Test Case 1 (nums = [2,7,11,15], target = 9): ";
    if (!result1.empty()) {
        std::cout << "Indices: [" << result1[0] << ", " << result1[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    std::cout << "Test Case 2 (nums = [3,2,4], target = 6): ";
    if (!result2.empty()) {
        std::cout << "Indices: [" << result2[0] << ", " << result2[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    std::cout << "Test Case 3 (nums = [3,3], target = 6): ";
    if (!result3.empty()) {
        std::cout << "Indices: [" << result3[0] << ", " << result3[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
