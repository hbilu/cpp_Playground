/*
The task is to complete the function subarraySum() which takes arr, N, and S as input parameters 
and returns an ArrayList containing the starting and ending positions of the first such occurring subarray from the left 
where sum equals to S. The two indexes in the array should be according to 1-based indexing. 
If no such subarray is found, return an array consisting of only one element that is -1.

Example:    Input: N = 10, S = 15, A[] = {1,2,3,4,5,6,7,8,9,10}
            Output: 1 5
            Explanation: The sum of elements from 1st position to 5th position is 15.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum = arr[0];
        int start=0;
        int end = 0;
        
        if (s==0){
            for (int i=0; i<n; i++){
                if (arr[i]==0){
                    return {i+1, i+1};
                }
            }
            return {-1};
        }
            
        while (start<n && end<n){
            if (sum==s){
                return {start+1,end+1};
            }
            if (sum>s){
                sum -= arr[start];
                start += 1;
            }
            else{
                end += 1;
                if (end==n){
                    return {-1};
                }
                sum += arr[end];
            }
        }
        return {-1};
    }
};