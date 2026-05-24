/*
Problem: Best Time to Buy and Sell Stock

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`-th day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done, i.e. max profit = 0.

Constraints:
1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4

Hints:
1. You need to find the minimum buying price and the maximum selling price after that.
2. Keep track of the minimum price encountered so far as you iterate through the array.
3. At each step, calculate the potential profit if you sell at the current price and update the maximum profit if it's higher.
*/

#include <vector>
#include <iostream>
#include <algorithm> // For std::max and std::min

// You will write your code here
// int maxProfit(std::vector<int>& prices) {
//     
// }

int main() {
    // Example usage and testing (optional)
    // std::vector<int> prices = {7,1,5,3,6,4};
    // std::cout << "Max Profit: " << maxProfit(prices) << std::endl;
    return 0;
}
