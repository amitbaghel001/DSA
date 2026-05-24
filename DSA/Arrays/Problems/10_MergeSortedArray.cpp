/*
Problem: Merge Sorted Array

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6].

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, the first m elements are empty. All of nums1's elements are 0, which are merely placeholders.

Constraints:
nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-10^9 <= nums1[i], nums2[j] <= 10^9

Hints:
1. Think about merging from the end of the arrays.
2. You have enough space at the end of `nums1`.
3. Use three pointers: one for `nums1` (actual elements), one for `nums2`, and one for the current insertion position in `nums1` (from the end).
*/

#include <vector>
#include <iostream>
#include <algorithm> // For std::sort (if needed for a simpler approach)

// You will write your code here
// void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums1 = {1,2,3,0,0,0};
    // int m = 3;
    // std::vector<int> nums2 = {2,5,6};
    // int n = 3;
    // merge(nums1, m, nums2, n);
    // std::cout << "Merged array: ";
    // for (int num : nums1) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
