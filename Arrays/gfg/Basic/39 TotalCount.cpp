// Given an array Arr of N positive integers and a number K where K is used as a threshold 
// value to divide each element of the array into sum of different numbers. Find the sum 
// of count of the numbers in which array elements are divided.

// Example 1:

// Input:
// N = 4, K = 3
// Arr[] = {5, 8, 10, 13}
// Output: 14
// Explanation: Each number can be expressed as sum 
// of different numbers less than or equal to K as
// 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 
// 13 (3 + 3 + 3 + 3 + 1). So, the sum of count 
// of each element is (2+3+4+5)=14.
  
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 10^7
// 0 ≤ Arri ≤ 10^7
// 1 ≤ K ≤ 10^7

class Solution{   
public:
    int count(int val,int k)
    {
        int c = 0;
        while(val>0)
        {
           c++;
           val = val - k;
        }
        return c;
    }
    
    int totalCount(int arr[], int n, int k) {
        // code here
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int val = arr[i];
            sum = sum + count(val,k);
        }
        return sum;
    }
};
