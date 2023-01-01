Given an array of distinct elements. Find the third largest element in it.
Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.
  
Example 1:
Input:
N = 5
A[] = {2,4,1,3,5}
Output: 3

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^5
1 ≤ A[i] ≤ 10^5

class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
        //Your code here
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>a)
                a = arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>b && arr[i] !=a)
                b = arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>c && arr[i] !=a && arr[i] != b)
                c = arr[i];
        }
        return c;
    }

};
