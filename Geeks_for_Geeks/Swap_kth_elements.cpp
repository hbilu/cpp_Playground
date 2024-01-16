/*
Given an array Arr of size N, swap the Kth element from beginning with Kth element from end.

Example:    Input: N = 8, K = 3, Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
            Output: 1 2 6 4 5 3 7 8
            Explanation: Kth element from beginning is 3 and from end is 6.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/

class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    int temp = arr[k-1];
	    arr[k-1] = arr[n-k];
	    arr[n-k] = temp;
	}
};