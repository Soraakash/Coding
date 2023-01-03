// You are given an array of size N. Rearrange the given array in-place such that all 
// the negative numbers occur before positive numbers.(Maintain the order of all -ve 
// and +ve numbers as given in the original array).
 

// Example 1:

// Input:
// N = 4
// Arr[] = {-3, 3, -2, 2}
// Output:
// -3 -2 3 2
// Explanation:
// In the given array, negative numbers
// are -3, -2 and positive numbers are 3, 2.
  
// Expected Time Complexity: O(N. Log(N))
// Expected Auxiliary Space: O(Log(N))

// Constraints:
// 1 ≤ N ≤ 10^7
// -1018 ≤ Elements of array ≤ 10^18

void Rearrange(int arr[], int n)
{
    // Your code goes here
    int index = 0;
    vector<int> ans;
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0){
            ans.push_back(arr[i]);
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= 0){
            ans.push_back(arr[i]);
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        arr[i] = ans[i];
    }
}
