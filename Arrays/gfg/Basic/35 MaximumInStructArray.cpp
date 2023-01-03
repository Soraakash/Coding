// Given a struct array of type Height, having two elements feet and inches. Find the
// maximum height among n heights, where height is calculated sum of feet and inches
// after converting feet into inches.

// Example 1:

// Input:
// n = 2
// h1 -> 1 2
// h2 -> 2 1
// Output: 
// 25
// Explanation:
// (1, 2) and (2, 1) are respective given heights.
// After converting both heigths in to inches,
// we get 14 and 25 as respective heights.
// So, 25 is the maximum height.
  
  
/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here
    int sum = 0;
    int maxx = -1;
    for(int i=0;i<n;i++)
    {
        struct Height k = arr[i];
        sum = k.inches + k.feet*12;
        maxx = max(sum,maxx);
    }
    return maxx;
}
