/*
Problem: Rotate Array

Given an array, rotate the array to the right by `k` steps, where `k` is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:
1 <= nums.length <= 10^5
-2^31 <= nums[i] <= 2^31 - 1
0 <= k <= 10^5

Hints:
1. A straightforward approach would be to use a temporary array.
2. Consider the modulo operator to handle cases where `k` is greater than the array length.
3. Can you solve this in-place with O(1) extra space? Think about reversing segments of the array.
*/

#include <vector>
#include <iostream>
#include <algorithm> // For std::reverse

// You will write your code here
// void rotate(std::vector<int>& nums, int k) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    // int k = 3;
    // rotate(nums, k);
    // std::cout << "Rotated array: ";
    // for (int num : nums) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
