/*
Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)

Example:
Input: N = 5    Output: 15
Explanation: For n = 5, 1 + 2 + 3 + 4 + 5 = 15.
*/

class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    return ((long)n*(n+1)/2);
	}
};