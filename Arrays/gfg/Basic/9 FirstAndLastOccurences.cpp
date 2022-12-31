// Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences
// of an element x in the given array.

// Example 1:

// Input:
// n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  2 5
// Explanation: First occurrence of 5 is at index 2 and last
//              occurrence of 5 is at index 5. 
// Expected Time Complexity: O(logN)
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 10^7

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    for(int i=0;i<n;i++)
        if(arr[i]==x)
        {
            v.push_back(i);
            break;
        }
    for(int i=n-1;i>=0;i--)
        if(arr[i]==x)
        {
            v.push_back(i);
            break;
        }
    if(v.size() == 0)
        return {-1,-1};;
    return v;
    
}
