// Given two arrays of A and B respectively of sizes N1 and N2, the task is to calculate 
// the product of the maximum element of the first array and minimum element of the second array.

// Example 1:

// Input : A[] = {5, 7, 9, 3, 6, 2}, 
//         B[] = {1, 2, 6, -1, 0, 9}
// Output : -9
// Explanation:
// The first array is 5 7 9 3 6 2. 
// The max element among these elements is 9.
// The second array is 1 2 6 -1 0 9.
// The min element among these elements is -1.
// The product of 9 and -1 is 9*-1=-9.
  
// Expected Time Complexity: O(N + M).
// Expected Auxiliary Space: O(1).
 
// Constraints:
// 1 ≤ N, M ≤ 10^6
// -108 ≤ Ai, Bi ≤ 10^8

class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        long long maxi = INT_MIN;
        long long mini = INT_MAX;
        for(int i=0;i<n;i++)
            if(a[i]>maxi)
                maxi = a[i];
        for(int j=0;j<m;j++)
            if(b[j]<mini)
                mini = b[j];
        return mini * maxi;
    }
};
