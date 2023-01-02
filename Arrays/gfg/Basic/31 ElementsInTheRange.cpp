// Given an array arr[] containing positive elements. A and B are two numbers defining
// a range. The task is to check if the array contains all elements in the given range.

// Example 1:

// Input: N = 7, A = 2, B = 5
// arr[] =  {1, 4, 5, 2, 7, 8, 3}
// Output: Yes
// Explanation: It has elements between 
// range 2-5 i.e 2,3,4,5
  
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 10^7

class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
		    int val = arr[i];
		    if(val<A || val>B)
		        continue;
		    else
		    {
		        if(val==A)
		            A++;
		        if(A>B) return true;
		    }
		}
		return false;
	}
};
