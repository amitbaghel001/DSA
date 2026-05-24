#include <vector>
#include <iostream>
#include <algorithm> // For std::reverse

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k == 0) {
        return;
    }
    
    k %= n; // Handle cases where k is greater than n

    // Approach 1: Using a temporary vector (O(N) space)
    /*
    std::vector<int> temp(n);
    for (int i = 0; i < n; ++i) {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
    */

    // Approach 2: Using reversals (O(1) space)
    // Reverse the entire array
    std::reverse(nums.begin(), nums.end());
    // Reverse the first k elements
    std::reverse(nums.begin(), nums.begin() + k);
    // Reverse the remaining n-k elements
    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    rotate(nums1, k1);
    std::cout << "Test Case 1 (nums = [1,2,3,4,5,6,7], k = 3): Rotated array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 5 6 7 1 2 3 4

    std::vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    rotate(nums2, k2);
    std::cout << "Test Case 2 (nums = [-1,-100,3,99], k = 2): Rotated array: ";
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 3 99 -1 -100

    std::vector<int> nums3 = {1, 2};
    int k3 = 3; // k > n
    rotate(nums3, k3);
    std::cout << "Test Case 3 (nums = [1,2], k = 3): Rotated array: ";
    for (int num : nums3) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 2 1 (1,2 -> 2,1 -> 1,2 -> 2,1)
    
    return 0;
}
