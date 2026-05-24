/*
Problem: Maximum Subarray

Given an integer array `nums`, find the subarray with the largest sum, and return its sum.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum = 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum = 23.

Constraints:
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4

Hints:
1. This problem can be solved using dynamic programming.
2. Consider Kadane's algorithm.
3. At each position, what's the maximum sum ending at that position? It's either the current element itself or the current element plus the maximum sum ending at the previous position.
*/

#include <vector>
#include <iostream>
#include <algorithm> // For std::max

// You will write your code here
// int maxSubArray(std::vector<int>& nums) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // std::cout << "Max Subarray Sum: " << maxSubArray(nums) << std::endl;
    return 0;
}
