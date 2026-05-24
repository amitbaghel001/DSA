#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm> // For std::sort

std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    // Ensure nums1 is the smaller array to optimize hash map size (optional, but good practice)
    if (nums1.size() > nums2.size()) {
        return intersect(nums2, nums1);
    }

    std::unordered_map<int, int> counts;
    for (int num : nums1) {
        counts[num]++;
    }

    std::vector<int> result;
    for (int num : nums2) {
        if (counts.count(num) && counts[num] > 0) {
            result.push_back(num);
            counts[num]--; // Decrement count for duplicates
        }
    }
    return result;

    // Alternative: Two-pointer approach if arrays are sorted
    /*
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    std::vector<int> result;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else { // nums1[i] == nums2[j]
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;
    */
}

int main() {
    // Example usage and testing
    std::vector<int> nums1_1 = {1, 2, 2, 1};
    std::vector<int> nums2_1 = {2, 2};
    std::vector<int> result1 = intersect(nums1_1, nums2_1);
    std::cout << "Test Case 1 (nums1 = [1,2,2,1], nums2 = [2,2]): Intersection: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 2 2 (order might vary)

    std::vector<int> nums1_2 = {4, 9, 5};
    std::vector<int> nums2_2 = {9, 4, 9, 8, 4};
    std::vector<int> result2 = intersect(nums1_2, nums2_2);
    std::cout << "Test Case 2 (nums1 = [4,9,5], nums2 = [9,4,9,8,4]): Intersection: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected: 4 9 (or 9 4, order might vary)

    return 0;
}
