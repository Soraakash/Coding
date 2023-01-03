// Given an array arr of size n. Print all the numbers less than k and should be such that the difference between every adjacent digit should be 1 in the array.

// Note: Return empty list if no such number present, driver code will automatically print -1.

// Example 1:

// Input:
// n = 8, k = 54
// arr[] = {7, 98, 56, 43, 45, 23, 12, 8}
// Output: 43 45 23 12
// Explanation: 43 45 23 12 all these numbers have adjacent 
// digits diff as 1 and they areless than 54.
  
// Expected Time Complexity:O(n)
// Expected Auxiliary Space:O(1)

// Constraints:
// 1 <= n <= 107
// 1 <= k, arr[i] <= 10^18

class Solution{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        // code here
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
          int temp = arr[i];
          int digit1 ,digit2,flag=1;
          if(temp>=10 && temp<k)
          {
              digit1 = temp %10;
              temp = temp/10;
              while(temp)
              {
                  digit2 = temp%10;
                  if(abs(digit1 - digit2) !=1)
                  {
                      flag = 0;
                      break;
                  }
                  else
                  {
                      digit1 = digit2;
                      temp = temp/10;
                      flag =1;
                  }
              }
              if(flag)
                v.push_back(arr[i]);
          }
        }
        return v;
    }
};
