/*
Problem: Remove Duplicates from Sorted Array

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.

Consider the number of unique elements to be `k`. To be accepted, you need to return `k`, and the first `k` elements of `nums` should contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.

Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Constraints:
1 <= nums.length <= 3 * 10^4
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

Hints:
1. The array is sorted. This is a crucial piece of information.
2. Use the two-pointer approach. One pointer (`i`) iterates through the array, and another pointer (`j`) marks the position for the next unique element.
3. If `nums[i]` is different from `nums[j]`, then `nums[j+1]` should be `nums[i]`.
*/

#include <vector>
#include <iostream>

// You will write your code here
// int removeDuplicates(std::vector<int>& nums) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums = {1,1,2};
    // int k = removeDuplicates(nums);
    // std::cout << "Unique elements: " << k << ", Array: ";
    // for (int i = 0; i < k; ++i) {
    //     std::cout << nums[i] << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
