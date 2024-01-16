/*
Given a non-empty sequence of characters str, return true if sequence is Binary, else return false
Example:    Input: str = 101    Output: 1
            Input: str = 75     Output: 0

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(1)

Constraints:
1 <=T<= 50
1 <=Length of str<= 10000
*/

bool isBinary(string str)
{
   for(int i=0; i<str.length(); i++){
       if(str[i]=='0'||str[i]=='1')
            continue;
       else
            return 0;
   }
   return 1;
}