#include <vector>
#include <iostream>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> answer(n);

    // Calculate left products
    // answer[i] contains product of all elements to the left of i
    // For index 0, there are no elements to the left, so answer[0] = 1
    answer[0] = 1;
    for (int i = 1; i < n; ++i) {
        answer[i] = nums[i - 1] * answer[i - 1];
    }

    // Calculate right products and combine with left products
    // R stores the product of all elements to the right of i
    int R = 1;
    for (int i = n - 1; i >= 0; --i) {
        // For the last element, R is 1.
        // For others, R would be product of elements to the right.
        answer[i] = answer[i] * R;
        R *= nums[i];
    }

    return answer;
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> result1 = productExceptSelf(nums1);
    std::cout << "Test Case 1 (nums = [1,2,3,4]): Result: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 24 12 8 6

    std::vector<int> nums2 = {-1, 1, 0, -3, 3};
    std::vector<int> result2 = productExceptSelf(nums2);
    std::cout << "Test Case 2 (nums = [-1,1,0,-3,3]): Result: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 0 0 9 0 0

    return 0;
}
