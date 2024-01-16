/*
Given two arrays a[] and b[] of size n and m respectively. 
The task is to find the number of elements in the union between these two arrays.

Constraints:
1 ≤ n, m ≤ 105
0 ≤ a[i], b[i] < 105

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(n+m)
*/

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        std::unordered_set<int>u;
        u.insert(a, a+n);
        u.insert(b, b+m);
        return u.size();
    }
};