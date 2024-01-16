/*
Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Ai <= 105
0 <= X <= 105
*/

int countOfElements(int arr[], int n, int x) 
{   int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=x)
            count++;
    }
    return count;
}