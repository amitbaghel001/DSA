/*
Problem: Plus One

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the `i`-th digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading zeros.

Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124. Thus, the result should be [1,2,4].

Example 2:
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322. Thus, the result should be [4,3,2,2].

Example 3:
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10. Thus, the result should be [1,0].

Constraints:
1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading zeros.

Hints:
1. Start from the least significant digit (the end of the array).
2. If a digit becomes 10 after incrementing, set it to 0 and carry over 1 to the next digit.
3. What happens if all digits are 9 (e.g., [9,9,9])? You'll need to expand the array.
*/

#include <vector>
#include <iostream>
#include <algorithm> // For std::reverse (if needed)

// You will write your code here
// std::vector<int> plusOne(std::vector<int>& digits) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> digits = {1,2,3};
    // std::vector<int> result = plusOne(digits);
    // std::cout << "Result: ";
    // for (int digit : result) {
    //     std::cout << digit << " ";
    // }
    // std::cout << std::endl;
    return 0;
}
