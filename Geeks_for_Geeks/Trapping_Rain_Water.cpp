/*
Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

Example:
    Input: N = 4, arr[] = {7,4,0,9}
    Output: 10
    Explanation: Water trapped by above block of height 4 is 3 units and above block of height 0 is 7 units. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
3 < N < 106
0 < Ai < 108
*/

class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int lmax[n];
        int rmax[n];
        long long water = 0;
        lmax[0] = arr[0];
        for (int i=1; i<n; i++){
            lmax[i] = max(lmax[i-1],arr[i]);
        }
        rmax[n-1] = arr[n-1];
        for (int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1],arr[i]);
        }
        for (int i=1; i<n-1; i++){
            int col_pool = min(lmax[i-1], rmax[i+1]);
            if (col_pool>arr[i]){
                water += (col_pool-arr[i]);
            }
        }
        return water;
    }
};