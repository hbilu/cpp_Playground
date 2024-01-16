/*
Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or not.
Note:A Palindrome number is a number which stays the same when reversed.Example- 121,131,7 etc.

Expected Time Complexity:O(LogN)
Expected Auxillary Space:O(1)
*/

class Solution {
  public:
    int isDigitSumPalindrome(int N){
        int sum = 0;
        while(N!=0){
            sum += N%10;
            N /= 10;
        }
        int temp = sum;
        int res = 0;
        while(sum>0){
            int digit = sum%10;
            res = res*10+digit;
            sum /= 10;
        }
        if (temp==res){
            return 1;
        }
        else{
            return 0;
        }
    }
};