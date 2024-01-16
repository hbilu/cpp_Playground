/*
Given a number N. Count the number of digits in N which evenly divide N.
Example:    Input: N = 12
            Output: 2
            Explanation: 1, 2 both divide 12 evenly

Expected Time Complexity: O(log N)
Expected Space Complexity: O(1)

Constraints:
1<=N<=105
*/
class Solution{
public:
    int evenlyDivides(int N){
        int count = 0;
        int Num = N;
        while(N!=0){
            int digit = N%10;
            N /= 10;
            if(digit==0){
                continue;
            }
            else if(Num%digit==0){
                count++;
            }
        }
        return count;
    }
};