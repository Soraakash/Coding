// Given an unsorted array arr of size N, rearrange the elements of array such that number 
// at the odd index is greater than the number at the previous even index. The task is to 
// complete the function formatArray() which will return formatted array.

// NOTE:
// If the array formed is according to rules print 1, else 0.

// Example 1:

// Input:
// n = 5
// arr[] = {5, 4, 3, 2, 1}

// Output:
// 1
// Explanation:
// The given array after modification
// will be as such: 4 5 2 3 1.
  
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= arr[i] <= 100

vector<int> formatArray(vector<int> a,int n)
{
    //add code here.
    for(int i=0;i<n-1;i=i+2)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    return a;
}
