#include <vector>
#include <iostream>
#include <algorithm> // For std::max and std::min

int maxProfit(std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProf = 0;

    for (size_t i = 1; i < prices.size(); ++i) {
        // Update minimum price if current price is lower
        minPrice = std::min(minPrice, prices[i]);
        // Calculate potential profit if sold today and update maxProf
        maxProf = std::max(maxProf, prices[i] - minPrice);
    }
    return maxProf;
}

int main() {
    // Example usage and testing
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    std::cout << "Test Case 1 (prices = [7,1,5,3,6,4]): Max Profit = " << maxProfit(prices1) << std::endl; // Expected: 5

    std::vector<int> prices2 = {7, 6, 4, 3, 1};
    std::cout << "Test Case 2 (prices = [7,6,4,3,1]): Max Profit = " << maxProfit(prices2) << std::endl; // Expected: 0

    std::vector<int> prices3 = {1, 2, 3, 4, 5};
    std::cout << "Test Case 3 (prices = [1,2,3,4,5]): Max Profit = " << maxProfit(prices3) << std::endl; // Expected: 4

    return 0;
}
