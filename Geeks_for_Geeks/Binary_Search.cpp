/*
Given a sorted array of size N and an integer K, 
find the position(0-based indexing) at which K is present in the array using binary search.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.

Constraints:
1 <= N <= 105
1 <= arr[i] <= 106
1 <= K <= 106
*/

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int low = 0;
        int high = n-1;
        while (low<=high){
            int middle = (high+low)/2;
            if (k==arr[middle]){
                return middle;
            }
            else if (k<arr[middle]){
                high = middle-1;
            }
            else if (k>arr[middle]){
                low = middle+1;
            }
        }
        return -1;
    }
};