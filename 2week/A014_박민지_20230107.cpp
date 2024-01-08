/*
Source: https://leetcode.com/problems/summary-ranges/

228. Summary Ranges

You are given a sorted unique integer array nums.
A range [a,b] is the set of all integers from a to b (inclusive).
Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, 
and there is no integer x such that x is in one of the ranges but not in nums.
Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b

Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"

Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"

Constraints:

0 <= nums.length <= 20
-231 <= nums[i] <= 231 - 1
All the values of nums are unique.
nums is sorted in ascending order.
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int a;
		string str = "";
		vector<string> result;
        
        if(nums.empty()){
            return result;
        }
        
        a = nums[0];
        str = to_string(a);
        
        if(nums.size() <= 1){
            result.push_back(str);
            return result;
        }

		for(int i=1; i<nums.size(); i++){
            if(nums[i] == a+1){
                a++;
                if(i+1 == nums.size()){
                    str = str + "->" + to_string(nums[i]);
                    result.push_back(str);
                }
                continue;
            }else{
                if(str == to_string(nums[i-1])){
                    result.push_back(str);
                }else{
                    str = str + "->" + to_string(nums[i-1]);
                    result.push_back(str);
                }

                a = nums[i];
                str = to_string(a);

                if(i+1 == nums.size()){
                    result.push_back(to_string(nums[i]));
                }
            }
			
		}
		return result;
    }
};