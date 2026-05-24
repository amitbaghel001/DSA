#include <vector>
#include <iostream>
#include <algorithm> // For std::sort

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int p1 = m - 1; // Pointer for nums1's actual elements
    int p2 = n - 1; // Pointer for nums2
    int p = m + n - 1; // Pointer for the merged array (end of nums1)

    // While there are elements to compare in both arrays
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    // If there are remaining elements in nums2, copy them
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }
}

int main() {
    // Example usage and testing
    std::vector<int> nums1_1 = {1, 2, 3, 0, 0, 0};
    int m1 = 3;
    std::vector<int> nums2_1 = {2, 5, 6};
    int n1 = 3;
    merge(nums1_1, m1, nums2_1, n1);
    std::cout << "Test Case 1 (nums1 = [1,2,3,0,0,0], m=3, nums2 = [2,5,6], n=3): Merged array: ";
    for (int num : nums1_1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1 2 2 3 5 6

    std::vector<int> nums1_2 = {1};
    int m2 = 1;
    std::vector<int> nums2_2 = {};
    int n2 = 0;
    merge(nums1_2, m2, nums2_2, n2);
    std::cout << "Test Case 2 (nums1 = [1], m=1, nums2 = [], n=0): Merged array: ";
    for (int num : nums1_2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1

    std::vector<int> nums1_3 = {0};
    int m3 = 0;
    std::vector<int> nums2_3 = {1};
    int n3 = 1;
    merge(nums1_3, m3, nums2_3, n3);
    std::cout << "Test Case 3 (nums1 = [0], m=0, nums2 = [1], n=1): Merged array: ";
    for (int num : nums1_3) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1

    std::vector<int> nums1_4 = {4,5,6,0,0,0};
    int m4 = 3;
    std::vector<int> nums2_4 = {1,2,3};
    int n4 = 3;
    merge(nums1_4, m4, nums2_4, n4);
    std::cout << "Test Case 4 (nums1 = [4,5,6,0,0,0], m=3, nums2 = [1,2,3], n=3): Merged array: ";
    for (int num : nums1_4) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5 6

    return 0;
}
