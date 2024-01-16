/*
You are given a number N. You need to print the pattern for the given value of N.

Example:    Input: 3
            Output: 3 3 3 2 2 2 1 1 1 $3 3 2 2 1 1 $3 2 1 $

Constraints:
1 <= N <= 40
*/

void printPat(int n)
{
    int num = n; 
    for(int x=n; x>0; x--){
        for(int i=n; i>0; i--){
            for(int k=x; k>0; k--){
                cout<<i<<" "; 
            }
        }
        cout<<"$";
    }
}