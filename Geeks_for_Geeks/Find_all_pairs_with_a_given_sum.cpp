/*
Given two unsorted arrays A of size N and B of size M of distinct elements, 
the task is to find all pairs from both arrays whose sum is equal to X.
Note: All pairs should be printed in increasing order of u.

Example:    Input: A[] = {1, 2, 4, 5, 7}, B[] = {5, 6, 3, 4, 8}, X = 9
            Output: (1 8) (4 5) (5 4)

Expected Time Complexity: O(NLog(N))
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N, M ≤ 106
-106 ≤ X, A[i], B[i] ≤ 106

*/

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>> res;
        std::sort(A,A+N);
        std::sort(B,B+M);
        int ai = 0;
        int bi = M-1;
        while (ai<N && bi>=0){
            if (A[ai]+B[bi]==X){
                res.push_back(make_pair(A[ai],B[bi]));
                ai++;
                bi--;
            }
            else if (A[ai]+B[bi]<X){
                ai++;
            }
            else
                bi--;
        }
        return res;
    }
};