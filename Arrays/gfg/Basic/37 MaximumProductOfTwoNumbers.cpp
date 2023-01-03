// Given an array Arr of size N with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

// Example 1:
// Input: 
// N = 6
// Arr[] = {1, 4, 3, 6, 7, 0}  
// Output: 42
  
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ N ≤ 10^7
// 0 ≤ Arr[i] ≤ 10^4

class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    return arr[n-1]*arr[n-2];
	}
};
