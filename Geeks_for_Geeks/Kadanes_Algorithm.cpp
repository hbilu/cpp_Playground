/*
Given an array Arr[] of N integers. 
Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Example:    Input: N = 5, Arr[] = {1,2,3,-2,5}
            Output: 9
            Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
Example:    Input: N = 4, Arr[] = {-1,-2,-3,-4}
            Output: -1
            Explanation: Max subarray sum is -1 of element (-1)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107
*/

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long max_sum = arr[0];
        int sum = 0;
        for(int i=0; i<n; i++){
            if (sum<0){
                sum=0;
            }
            sum+=arr[i];
            if (max_sum<sum){
                max_sum=sum;
            }
        }
        return max_sum;
    }
};