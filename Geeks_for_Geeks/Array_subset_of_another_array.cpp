/*
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
Task is to check whether a2[] is a subset of a1[] or not
and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1. 

Example:    Input:  a1[] = {11, 7, 1, 13, 21, 3, 7, 3}      Output: Yes         Explanation: a2[] is a subset of a1[]
                    a2[] = {11, 3, 7, 1, 7}

Expected Time Complexity: O(max(n,m))
Expected Auxiliary Space: O(n)

Constraints:
1 <= n,m <= 105
1 <= a1[i], a2[j] <= 106
*/

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> x;
    for(int i=0; i<n; i++){
        x[a1[i]] += 1;
    }
    for(int i=0; i<m; i++){
        x[a2[i]] -= 1;
    }
    for(auto i:x){
        if(i.second<0){
            return "No";
        }
    }
    return "Yes";