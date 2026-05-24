#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int i = 0; // Pointer for the unique elements

    // Iterate with pointer 'j'
    for (size_t j = 1; j < nums.size(); ++j) {
        if (nums[j] != nums[i]) {
            i++; // Move the unique element pointer
            nums[i] = nums[j]; // Place the unique element
        }
    }
    return i + 1; // k is the count of unique elements (0-indexed i + 1)
}

int main() {
    // Example usage and testing
    std::vector<int> nums1 = {1, 1, 2};
    int k1 = removeDuplicates(nums1);
    std::cout << "Test Case 1 (nums = [1,1,2]): Unique elements: " << k1 << ", Array: ";
    for (int i = 0; i < k1; ++i) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl; // Expected: 2, Array: 1 2

    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = removeDuplicates(nums2);
    std::cout << "Test Case 2 (nums = [0,0,1,1,1,2,2,3,3,4]): Unique elements: " << k2 << ", Array: ";
    for (int i = 0; i < k2; ++i) {
        std::cout << nums2[i] << " ";
    }
    std::cout << std::endl; // Expected: 5, Array: 0 1 2 3 4

    std::vector<int> nums3 = {1, 1, 1};
    int k3 = removeDuplicates(nums3);
    std::cout << "Test Case 3 (nums = [1,1,1]): Unique elements: " << k3 << ", Array: ";
    for (int i = 0; i < k3; ++i) {
        std::cout << nums3[i] << " ";
    }
    std::cout << std::endl; // Expected: 1, Array: 1

    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    int k4 = removeDuplicates(nums4);
    std::cout << "Test Case 4 (nums = [1,2,3,4,5]): Unique elements: " << k4 << ", Array: ";
    for (int i = 0; i < k4; ++i) {
        std::cout << nums4[i] << " ";
    }
    std::cout << std::endl; // Expected: 5, Array: 1 2 3 4 5

    return 0;
}
