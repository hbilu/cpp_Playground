/*
Given an array A of n non negative numbers. The task is to find the first equilibrium point in an array. 
Equilibrium point in an array is an index (or position) such that the sum of all elements before that index is same as 
sum of elements after it. Return -1 if no such point exists. 

Example:    Input: n = 5, A[] = {1,3,5,2,2}     Output: 3 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
0 <= A[i] <= 109
*/

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        int left = 0;
        int right = n-1;
        long long lsum = 0;
        long long rsum = 0;
        if (n==1){
            return n;
        }
        while (left<=right){
            if (lsum<rsum){
                lsum += a[left];
                left++;
            }
            else if (rsum<lsum){
                rsum += a[right];
                right--;
            }
            else {
                if (left==right){return left+1;}
                else {
                    lsum += a[left];
                    left++;
                    rsum += a[right];
                    right--;
                }
            }
        }
        return -1;
    }
};