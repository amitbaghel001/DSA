/*
Problem: Find All Numbers Disappeared in an Array

Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all the integers in the range `[1, n]` that do not appear in `nums`.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]

Constraints:
n == nums.length
1 <= n <= 10^5
1 <= nums[i] <= n

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Hints:
1. The numbers are in the range [1, n]. Can you use the array itself to mark visited numbers?
2. When you see a number `x`, you can mark the element at index `x-1` as visited (e.g., by negating it or adding `n`).
3. After marking all numbers, iterate through the array. Any index `i` whose element is not marked (e.g., still positive) means that `i+1` was not present in the original array.
*/

#include <vector>
#include <iostream>
#include <cmath> // For std::abs

// You will write your code here
// std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {4,3,2,7,8,2,3,1};
    // std::vector<int> result = findDisappearedNumbers(nums);
    // std::cout << "Disappeared numbers: ";
    // for (int num : result) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
