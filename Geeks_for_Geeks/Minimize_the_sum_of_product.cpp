/*
You are given two arrays, A and B, of equal size N. 
The task is to find the minimum value of A[0] * B[0] + A[1] * B[1] + .... + A[N-1] * B[N-1], 
where shuffling of elements of arrays A and B is allowed.

Example:    Input: N = 5, A[] = {6, 1, 9, 5, 4}, B[] = {3, 4, 8, 2, 4}
            Output: 80
            Explanation: 2*9+3*6+4*5+4*4+8*1 = 18+18+20+16+8 = 80 is the minimum sum


Expected Time Complexity: O(N. log(N))  
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[] ≤ 106
*/

class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        std::sort(a,a+n);
        std::sort(b,b+n, [](int x, int y){return x>y;});
        long long int sum=0;
        for (int i=0; i<n; i++){
            sum += a[i]*b[i];
        }
        return sum;
    }
};