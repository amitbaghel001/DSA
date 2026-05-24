/*
Problem: Product of Array Except Self

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operator.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

Constraints:
2 <= nums.length <= 10^5
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Hints:
1. Can you compute the product of elements to the left of `i` and to the right of `i` separately?
2. Initialize an `answer` array with all 1s.
3. Make two passes: one to calculate left products and one for right products.
*/

#include <vector>
#include <iostream>

// You will write your code here
// std::vector<int> productExceptSelf(std::vector<int>& nums) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {1,2,3,4};
    // std::vector<int> result = productExceptSelf(nums);
    // std::cout << "Result: ";
    // for (int num : result) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
