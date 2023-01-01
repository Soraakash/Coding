// You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.

// Example 1:

// Input:
// N = 4
// A[] = {1,2,3,2}
// x = 1, y = 2
// Output: 1
// Explanation: x = 1 and y = 2. There are
// two distances between x and y, which are
// 1 and 3 out of which the least is 1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 10^5
// 0 <= A[i], x, y <= 10^5

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int min_distance  = INT_MAX;
        int pre = 0;
        for(int i=0;i<n;i++){
            if(a[i] == x || a[i] == y){
                pre = i;
                break;
            }
        }


        for(int i = pre+1;i<n;i++){
            if(a[i]==x || a[i]==y){

                if(a[i]!=a[pre] && min_distance>(i-pre)){
                    min_distance = i-pre;
                    pre = i;
                }
                else{
                    pre = i;
                }
            }
        }

        if(min_distance == INT_MAX){
            return -1;
        }
        else{
            return min_distance;
        }
    }
};
