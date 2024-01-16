/*
You are given a string s. You need to reverse the string.

Example:    Input: s = Geeks
            Output: skeeG

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
*/

class Solution
{
    public:
    string reverseWord(string str)
    {
        return std::reverse(str.begin(), str.end());
        return str;
    }
};