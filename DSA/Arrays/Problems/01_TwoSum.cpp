/*
Problem: Two Sum

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists.

Hints:
1. Consider using a data structure that allows for efficient lookups.
2. Think about iterating through the array and for each element, checking if its complement (target - current element) already exists.
3. How can you store elements and their indices for quick retrieval?
*/

#include <vector>
#include <iostream>

// You will write your code here
// std::vector<int> twoSum(std::vector<int>& nums, int target) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
    // std::vector<int> result = twoSum(nums, target);
    // std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    return 0;
}
