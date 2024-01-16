/*
Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value.
Follows 1-based indexing of the array.

Example:    Input: N = 5, Arr[] = {15, 2, 45, 12, 7}
            Output: 2
            Explanation: Only Arr[2] = 2 exists here.
*/

class Solution{
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> result;
	    for(int i=0; i<n; i++) 
	    {
	        if(arr[i]==i+1)
	        {
	            result.push_back(arr[i]);
	        }
	    }
	    return result;
	}
};