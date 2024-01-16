/*
Given an array arr[] of N integers, calculate the median.

Expected Time Complexity: O(n * log(n))
Expected Space Complexity: O(1)

Constraints:
1 <= Length of Array <= 100
1 <= Elements of Array <= 100
*/

class Solution
{
public:
	int find_median(vector<int> v)
	{
		std::sort(v.begin(), v.end());
		int mid = v.size()/2;
		if (v.size()%2 == 0){
		    return ((v[mid]+v[mid-1])/2);
		}
		else{
		    return v[mid];  
		}

	}
};