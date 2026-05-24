#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm> // For std::sort

bool containsDuplicate(std::vector<int>& nums) {
    // Approach 1: Using a hash set (unordered_set)
    std::unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;

    // Approach 2: Sorting (modifies original array)
    /*
    if (nums.empty()) {
        return false;
    }
    std::sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        if (nums[i] == nums[i+1]) {
            return true;
        }
    }
    return false;
    */
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::cout << "Test Case 1 (nums = [1,2,3,1]): " << (containsDuplicate(nums1) ? "true" : "false") << std::endl; // Expected: true

    std::vector<int> nums2 = {1, 2, 3, 4};
    std::cout << "Test Case 2 (nums = [1,2,3,4]): " << (containsDuplicate(nums2) ? "true" : "false") << std::endl; // Expected: false

    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << "Test Case 3 (nums = [1,1,1,3,3,4,3,2,4,2]): " << (containsDuplicate(nums3) ? "true" : "false") << std::endl; // Expected: true

    return 0;
}
