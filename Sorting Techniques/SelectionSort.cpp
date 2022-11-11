// Code for Selection Sort
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

void SelectionSort(vector<int> &nums)
{
    int n = nums.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(nums[j]<nums[i])
                swap(nums[j],nums[i]);
        }
    }
}

int main()
{
    vector<int> nums = {5,8,1,54,26,3};
    printArray(nums);
    SelectionSort(nums);
    printArray(nums);
    return 0;
}