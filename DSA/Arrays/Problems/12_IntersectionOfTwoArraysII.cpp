/*
Problem: Intersection of Two Arrays II

Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9] (or [9,4])

Constraints:
1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000

Follow up:
* What if the given array is already sorted? How would you optimize your algorithm?
* What if `nums1`'s size is small compared to `nums2`'s size? Which algorithm is better?
* What if elements of `nums2` are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

Hints:
1. Use a hash map (frequency map) to store counts of elements from one array.
2. Iterate through the second array and check if elements exist in the hash map.
3. Decrement counts in the hash map as you add to the result to handle duplicates.
4. If arrays are sorted, a two-pointer approach is efficient.
*/

#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm> // For std::sort (if considering sorted approach)

// You will write your code here
// std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> nums1 = {1,2,2,1};
    // std::vector<int> nums2 = {2,2};
    // std::vector<int> result = intersect(nums1, nums2);
    // std::cout << "Intersection: ";
    // for (int num : result) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
