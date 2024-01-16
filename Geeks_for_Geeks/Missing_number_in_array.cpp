/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int expected_sum = n*(n+1)/2;
        int sum = std::accumulate(array.begin(), array.end(), 0);
        return (expected_sum - sum);
    }
};