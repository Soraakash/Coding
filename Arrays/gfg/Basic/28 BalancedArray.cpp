// Given an array of even size N, task is to find minimum value that can be 
// added to an element so that array become balanced. An array is balanced 
// if the sum of the left half of the array elements is equal to the sum 
// of right half.

// Example 1:

// Input:
// N = 4
// arr[] = {1, 5, 3, 2}
// Output: 1
// Explanation: 
// Sum of first 2 elements is 1 + 5  = 6, 
// Sum of last 2 elements is 3 + 2  = 5,
// To make the array balanced you can add 1.
  
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2<=N<=10^7
// N%2==0

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
        int suma=0,sumb=0;
        int c = n/2;
        for(int i=0;i<c;i++)
            suma = suma+a[i];
        for(int i=c;i<n;i++)
            sumb = sumb + a[i];
        return abs(suma - sumb);
    }
};
