/*
You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).

Example:    Input: N = 5, A[] = {1, 2, 3, 4, 5}
            Output: 1 3 5

Constraints:
1 <= N <= 105
1 <= Ai <= 105

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1
*/

// ar[] is the array 
// n is the number of elements in array.
void print(int ar[], int n)
{
    for(int i=0; i<n; i++){
        if(((i+1)%2)!=0){
            cout<<ar[i]<<" ";
        }
    }
    
}