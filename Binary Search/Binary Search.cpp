// Binary Search Study Plan
// Day 1

// Given an array of integers nums which is sorted in ascending order, and an integer target,
// write a function to search target in nums.If target exists, then return its index.Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

int search(vector<int> & nums, int target)
{
    int n = nums.size();
    int idx = -1;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            idx = mid;
            return idx;
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return idx;
}

