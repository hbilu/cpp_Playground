/*
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. 
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example:
    Input: 5, 111 222 333 444 555
    Output: 1

Constraints:
1 <=T<= 50
1 <=n<= 20
1 <=A[]<= 10000
*/

// first way
class Solution {
public:

    bool Palindrome(int Num)
    {
        string N = std::to_string(Num);
        int len = N.length();
        for(int i=0; i<(len/2); i++){
            if(N[i] != N[len-1-i])
                return false;
        }
        return true;
    }
    
    int PalinArray(int a[], int n)
    {
    	for(int i=0; i<n; i++){
    	    bool res = Palindrome(a[i]);
    	    if (res == false)
    	        return 0;
    	}
    	return 1;
    }
};

//second way
#include <algorithm>
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0; i<n; i++){
    	    string N = std::to_string(a[i]);
    	    string R = N;
    	    std::reverse(N.begin(), N.end());
    	    if (N.compare(R) != 0)
    	        return 0;
    	}
    	return 1;
    }
};