/*
Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is a leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader. 

Example:    Input: n = 6, A[] = {16,0,17,4,3,5,2}
            Output: 17 5 2

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 <= n <= 107
0 <= Ai <= 107   
*/

class Solution{
    public:
    vector<int> leaders(int a[], int n){
        int lead = 0;
        vector<int> leads;
        for (int i=n-1; i>-1; i--){
            if (a[i]>=lead){
                lead = a[i];
                leads.push_back(a[i]);
            }
        }
        std::reverse(leads.begin(),leads.end());
        return leads;
    }
};