/*
Given an integer array Arr[] of size N. The task is to find sum of it.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution{
public:
	int sum(int arr[], int n) {
	    int sum=0;
	    for(int i=0; i<n; i++){
	        sum += arr[i];
	    }
	    return sum;
	}
};