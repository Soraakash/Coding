// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

// Example 1:
// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= Ai <=1012
pair<long long, long long> getMinMax(long long a[], int n) {
    long long max = 1;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max = a[i];
    }
    long long min = max;
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
            min = a[i];
    }
    return {min,max};
}
