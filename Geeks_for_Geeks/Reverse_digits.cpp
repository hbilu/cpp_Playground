/*
Given N, reverse the digits of N.
Example: Input : 122    Output: 221 Explanation: By reversing the digits of number, number will change into 221.

Expected Time Complexity: O(Log(N))
Expected Space Complexity: O(1)
*/

// first way
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int result = 0;
		    while(n!=0){
		        int digit = n%10;
		        result = result*10+digit;
		        n=n/10;
		    }
		    return result;
		}
};

// second way
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int result = 0;
		    while(n!=0){
		        int digit = n%10;
		        result = result*10+digit;
		        n=n/10;
		    }
		    return result;
		}
};
