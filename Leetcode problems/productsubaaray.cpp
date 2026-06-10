#include <bits/stdc++.h>
using namespace std;

long long solveSegment(vector<int>& arr, int l, int r) {
    // segment = arr[l...r], no zero inside

    int negCount = 0;
    long long totalProduct = 1;
    int firstNeg = -1, lastNeg = -1;

    for (int i = l; i <= r; i++) {
        totalProduct *= arr[i];

        if (arr[i] < 0) {
            negCount++;

            if (firstNeg == -1)
                firstNeg = i;

            lastNeg = i;
        }
    }

    // even negatives → entire segment
    if (negCount % 2 == 0)
        return totalProduct;

    long long option1 = LLONG_MIN;
    long long option2 = LLONG_MIN;

    // Exclude prefix till first negative
    if (firstNeg < r) {
        long long prod = 1;
        for (int i = firstNeg + 1; i <= r; i++)
            prod *= arr[i];
        option1 = prod;
    }

    // Exclude suffix from last negative
    if (lastNeg > l) {
        long long prod = 1;
        for (int i = l; i < lastNeg; i++)
            prod *= arr[i];
        option2 = prod;
    }

    return max(option1, option2);
}

long long maxProduct(vector<int>& arr) {
    int n = arr.size();

    long long ans = LLONG_MIN;
    int start = 0;

    for (int i = 0; i <= n; i++) {

        // End of a segment
        if (i == n || arr[i] == 0) {

            if (start <= i - 1) {
                ans = max(ans, solveSegment(arr, start, i - 1));
            }

            // Zero itself can be maximum
            if (i < n)
                ans = max(ans, 0LL);

            start = i + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {2, -5, 0, -4, 3};

    cout << "Maximum Product = " << maxProduct(arr);

    return 0;
}