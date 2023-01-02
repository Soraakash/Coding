Given an array of sorted integers. The task is to find the closest value to the given number in array.
Array may contain duplicate values.
Note: If the difference is same for two values print the value which is greater than the given number.

Example 1:

Input : Arr[] = {1, 3, 6, 7} and K = 4
Output : 3
Explanation:
We have an array [1, 3, 6, 7] and target is 4.
If we look at the absolute difference of target 
with every element of an array we will 
get [ |1-4|, |3-4|, |6-4|, |7-4| ]. 
So, the closest number is 3.
  
Expected Time Complexity: O(log(N)).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 10^5
1 ≤ K ≤ 10^5
1 ≤ A[i] ≤ 10^5

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        int dif;
        int min = 1245;
        int index;
        
        for (int i = 0; i < n; i++)
        {
            dif = abs(arr[i] - target);
            if (dif <= min)
            {
                min = dif;
                index = i;
            }
        }
        
        return arr[index];
    } 
};
