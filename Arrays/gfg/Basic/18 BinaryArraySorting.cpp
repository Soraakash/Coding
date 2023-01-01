// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.
 
// Example 1:

// Input: 
// 5
// 1 0 1 1 0
// Output: 
// 0 0 1 1 1
// Explanation: 
// After arranging the elements in 
// increasing order, elements will be as 
// 0 0 1 1 1.

// Expected Time Complexity: O(N)
// Expected Auxilliary Space: O(1)

// Constraints:
// 1 <= N <= 10^6
// 0 <= A[i] <= 1

class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       int c = 0;
       for(int i=0;i<N;i++)
       {
           if(A[i] == 0)
           {
               swap(A[i],A[c++]);
           }
       }
    }
};
