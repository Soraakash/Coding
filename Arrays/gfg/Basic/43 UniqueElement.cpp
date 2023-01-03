// Given an array of size n which contains all elements occurring in multiples of K, 
// except one element which doesn't occur in multiple of K. Find that unique element.

// Example 1:

// Input : 
// n = 7, k = 3
// arr[] = {6, 2, 5, 2, 2, 6, 6}
// Output : 
// 5
// Explanation:
// Every element appears 3 times except 5.
  
// Expected Time Complexity: O(N. Log(A[i]) )
// Expected Auxiliary Space: O( Log(A[i]) )

// Constraints:
// 3<= N<=2*10^5
// 2<= K<=2*10^5
// 1<= A[i]<=10^9

class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        int ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[a[i]] % k != 0)
               ans = a[i]; 
        }
        return ans;
    }

};
