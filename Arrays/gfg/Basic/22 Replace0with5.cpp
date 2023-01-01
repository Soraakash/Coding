// You are given an integer N. You need to convert all zeroes of N to 5.

// Example 1:

// Input:
// N = 1004
// Output: 1554
// Explanation: There are two zeroes in 1004
// on replacing all zeroes with "5", the new
// number will be "1554"
 
// Expected Time Complexity: O(K) where K is the number of digits in N
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= n <= 10000

int convertFive(int n) {
    // Your code here
    string str = to_string(n);
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '0')
            str[i] = '5';
    }
    n = stoi(str);
    return n;
    
}
