// Given an array of N positive integers where all numbers occur even number of times except
// one number which occurs odd number of times. Find the exceptional number.

// Example 1:

// Input:
// N = 7
// Arr[] = {1, 2, 3, 2, 3, 1, 3}
// Output: 3
// Explaination: 3 occurs three times.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ arr[i] ≤ 106

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int ans = arr[0];
        for(int i=1;i<n;i++)
            ans = ans ^ arr[i];
        return ans;
    }
};
