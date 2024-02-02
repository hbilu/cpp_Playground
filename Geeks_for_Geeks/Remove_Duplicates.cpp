/*
Given a string without spaces, the task is to remove duplicates from it.
Note: The original order of characters must be kept the same. 

Example:    Input: S = "zvvo"   Output: "zvo"

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(constant)

Constraints:
1 <= |S| <= 105
S conatins lowercase english alphabets
*/

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    map<char,int> m;
	    string result;
	    for (int i=0; i<S.length(); i++){
	        m[S[i]]++;
	        if(m[S[i]]==1){
	            result.push_back(S[i]);
	        }
	    }
	    return result;
	}
};