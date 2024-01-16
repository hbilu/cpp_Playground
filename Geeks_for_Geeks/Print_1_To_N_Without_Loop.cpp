/*
Print numbers from 1 to N without the help of loops.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N) (Recursive).

Constraints:
1 <= N <= 1000
*/

class Solution{
    public:
    void printNos(int N)
    {   if(N==0){
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
        return;
    }
};