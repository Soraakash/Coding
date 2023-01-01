// Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.

// Example 1:

// Input:
// N = 5
// Arr[] = {3, 2, 4, 6, 5}
// Output: Yes
// Explanation: a=3, b=4, and c=5 forms a
// pythagorean triplet.

// Expected Time Complexity: O(max(Arr[i])2)
// Expected Auxiliary Space: O(max(Arr[i]))

// Constraints:
// 1 <= N <= 10^7
// 1 <= Arr[i] <= 1000

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	        m[arr[i]*arr[i]]++;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int sum = arr[i]*arr[i] + arr[j]*arr[j];
	            if(m.find(sum) != m.end())
	                return true;
	        }
	    }
	    return false;
	}
};
