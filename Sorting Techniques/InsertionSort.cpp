// Code for Insertion Sort
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

void InsertionSort(vector<int> &nums)
{
    int n = nums.size();
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        int X = nums[i];
        while(j!=-1 && nums[j]>X)
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = X;
    }
}

int main()
{
    vector<int> nums = {5,8,1,54,26,3};
    printArray(nums);
    InsertionSort(nums);
    printArray(nums);
    return 0;
}