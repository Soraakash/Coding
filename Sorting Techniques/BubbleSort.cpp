// Code for Bubble Sort
// Time Complexity O(n*n)
// Space Complexity O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &nums)
{
    for(auto x:nums)
        cout<<x<<" ";
    cout<<endl;
}

void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
        }
    }
}

int main()
{
    vector<int> nums = {5,8,1,54,26,3};
    printArray(nums);
    bubbleSort(nums);
    printArray(nums);
    return 0;
}
