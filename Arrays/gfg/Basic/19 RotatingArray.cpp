// Given an array of size N. The task is to rotate array by D elements where D ≤ N.

// Example 1:

// Input:
// N = 7
// Arr[] = {1, 2, 3, 4, 5, 6, 7}
// D = 2
// Output: 3 4 5 6 7 1 2
// Explanation: 
// Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
// Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 10^5
// 1 ≤ Arr[i] ≤ 1000
// 0 ≤ D ≤ N

class Solution{   
public:
    void reverse(int arr[],int start,int end)
    {
        while(start<=end)
        {
            swap(arr[start++],arr[end--]);    
        }
    }
    void leftRotate(int arr[], int n, int d) {
        // code here
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1); 
    }
};
