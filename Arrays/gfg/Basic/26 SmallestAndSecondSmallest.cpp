// Given an array of integers, your task is to find the smallest and second smallest element
// in the array. If smallest and second smallest do not exist, print -1.

// Example 1:

// Input :
// 5
// 2 4 3 5 6
// Output :
// 2 3 
// Explanation: 
// 2 and 3 are respectively the smallest 
// and second smallest elements in the array.
  
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=N<=10^5
// 1<=A[i]<=10^5

vector<int> minAnd2ndMin(int a[], int n) {
    int mina = INT_MAX;
    int minb = INT_MAX;
    for(int i=0;i<n;i++)
        if(a[i] < mina)
            mina = a[i];
            
    for(int i=0;i<n;i++)
        if(a[i] < minb && a[i] != mina)
            minb = a[i];
    if(mina == INT_MAX || minb == INT_MAX)
        return {-1};
    return {mina,minb};
}
