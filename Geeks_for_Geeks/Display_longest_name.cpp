/*
Given a list of names, display the longest name.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution{
    public:
    string longest(string names[], int n)
    {   int maxLength = 0;
        int maxIndex = 0;
        for(int i=0; i<n; i++){
            if (names[i].size()>maxLength){
                maxLength = names[i].size();
                maxIndex = i;
            }
        }
        return names[maxIndex];
    }
};