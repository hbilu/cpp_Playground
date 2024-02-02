/*
Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion 
so that the converted array should be in the below form: 
arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

Example:
    Input:  N = 7, Arr[] = {4, 3, 7, 8, 6, 2, 1}
    Output: 3 7 4 8 2 6 1
    Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 106
0 <= Arri <= 109
*/

class Solution {
  public:
    void zigZag(int arr[], int n) {
        for (int i=0; i<n; i++){
            if (i%2==0 && arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            if (i%2==1 && arr[i]<arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
};