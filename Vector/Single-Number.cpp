// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Leetcode(136)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter size of vector: "<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter elements of vector: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    } 
    int ans = 0;
    for(int ele: nums) ans ^= ele;
    cout<<"single unique number is : "<<ans<<endl;
}