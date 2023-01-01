// Determine the tastiness level of the square which his sister gets.

// Example 1:

// Input : arr[ ] = {5, 3, 1, 6, 9}
// Output : 1
// Explanation:
// Initially: 5 3 1 6 9
// In first step: 5 3 1 6
// In Second step: 5 3 1
// In Third step: 3 1
// In Fourth step: 1
// Return 1
  
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints : 
// 1 ≤ N ≤ 10^5
// 1 ≤ A[i] ≤ 10^9

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int mini = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(mini>arr[i])
                mini = arr[i];
        }
        return mini;
    }
};
