// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 
  
// Example 1:

// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1
// Explanation: 0, -1 and 1 forms a triplet
// with sum equal to 0.

// *  arr[]: input array
// *  n: size of array
// */
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
       // Sorting the array
       sort(arr, arr+n);
       for(int i=0;i<n-2;i++)
       {
           int sum_= 0 - arr[i];
           int l = i + 1;
           int h = n - 1;
           while(l < h)
           {
               if(arr[l] + arr[h] == sum_)
                   return true;
                   
               else if(arr[l] + arr[h] > sum_)
                   h-- ;
               else
                   l++ ;  
           }
       }
       return false;
    }
};
