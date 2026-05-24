/*
Problem: Single Number

Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

Constraints:
1 <= nums.length <= 3 * 10^4
-3 * 10^4 <= nums[i] <= 3 * 10^4
Each element in the array appears twice except for one element which appears only once.

Hints:
1. What property does the XOR operation have with identical numbers? (a ^ a = 0)
2. What property does XOR have with zero? (a ^ 0 = a)
3. If you XOR all elements in the array, what will be the result?
*/

#include <vector>
#include <iostream>
#include <numeric> // For std::accumulate with XOR

// You will write your code here
// int singleNumber(std::vector<int>& nums) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {2,2,1};
    // std::cout << "Single number: " << singleNumber(nums) << std::endl;
    return 0;
}
