/*
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
Two arrays are said to be equal if both of them contain same set of elements, 
arrangements (or permutation) of elements may be different though.

Example:   Input:   N = 5, A[] = {1,2,5,4,0,5}, B[] = {2,4,5,5,0,1},    Output: 1

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1<=N<=107
1<=A[],B[]<=1018
*/

class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) {
        std::sort(A.begin(), A.begin()+N);
        std::sort(B.begin(), B.begin()+N);
        for(int i=0; i<N; i++){
            if(A[i]!=B[i]){
                return 0;
            }
        }
        return 1;
    }
};