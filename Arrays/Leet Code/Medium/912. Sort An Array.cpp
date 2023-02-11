// Given an array of integers nums, sort the array in ascending order and return it.
// You must solve the problem without using any built-in functions in O(nlog(n)) 
// time complexity and with the smallest space complexity possible.
  
// Example 1:

// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed 
// (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

// Constraints:

// 1 <= nums.length <= 5 * 10^4
// -5 * 104 <= nums[i] <= 5 * 10^4

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       priority_queue<int, vector<int>, greater<int>>q;
		for(int i=0; i<nums.size(); i++){
			q.push(nums[i]);
		}
		vector<int>ans;
		while(!q.empty()){
			ans.push_back(q.top());
			q.pop();
		}
		return ans;
    }
};
