/*
For a given 3 digit number, find whether it is armstrong number or not. 
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
 Return "Yes" if it is a armstrong number else return "No".

Example:    Input: N = 153  Output: "Yes"   Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
100 ≤ n <1000
*/

#include <cmath>
class Solution {
  public:
    string armstrongNumber(int n){
        int Num = n, Sum = 0;
        while(Num!=0){
            int digit = Num%10;
            Num /= 10;
            Sum +=  pow(digit,3);
        }
        if(Sum==n){
            return "Yes";
        }
        else{
            return "No";
        }
        
    }
};