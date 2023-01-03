// Given an array of penalties fine[], an array of car numbers car[], and also the date. 
// The task is to find the total fine which will be collected on the given date. Fine is
// collected from odd-numbered cars on even dates and vice versa. 

// Example 1:

// Input:
// N = 4, date = 12
// car[] = {2375, 7682, 2325, 2352}
// fine[] = {250, 500, 350, 200}
// Output:
// 600
// Explantion:
// The date is 12 (even), so we collect the
// fine from odd numbered cars. The odd
// numbered cars and the fines associated
// with them are as follows:
// 2375 -> 250
// 2325 -> 350
// The sum of the fines is 250+350 = 600
  
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 10^5
// 1 <= Cari <= 10^5
// 1 <= Date <= 10^5
// 1 <= Finei <= 10^5


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long sum =0;
        if(date %2 ==0)
            for(int i=0;i<n;i++)
            {
                if(car[i] % 2 != 0)
                    sum = sum + fine[i];
            }
        else
        for(int i=0;i<n;i++)
            {
                if(car[i] % 2 == 0)
                    sum = sum + fine[i];
            }
        return sum;
            
    }
};
