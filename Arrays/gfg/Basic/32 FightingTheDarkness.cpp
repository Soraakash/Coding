// Given an array arr[] of size N representing the size of candles which reduce by 1 
// unit each day. The room is illuminated using the given N candles. Find the 
// maximum number of days the room is without darkness.

// Example 1:

// Input: N = 3, arr[] = {1,1,2} 
// Output: 2
// Explanation: The candles' length reduce 
// by 1 in 1 day. So, at the end of day 1: 
// Sizes would be 0 0 1, So, at end of 
// day 2: Sizes would be 0 0 0. This means 
// the room was illuminated for 2 days.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 10^6

class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
            if(arr[i]>maxi)
                maxi = arr[i];
        return maxi;
    }
};
