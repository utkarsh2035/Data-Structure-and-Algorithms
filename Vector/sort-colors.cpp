// Use two pointer approach to sort a array of 0's, 1's and 2's
// put first and second variable to 0th place and third variable to (size-1)th place and play with second variable -> known as "Dutch flag algorithm 
// leetcode 75

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter elements of array (0's, 1's and 2's only): "<<endl;
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    } 

    int low = 0, mid = 0, hi = size-1;
    while(mid <= hi){
        if(nums[mid] == 2) swap(nums[mid], nums[hi--]);
        else if(nums[mid] == 0) swap(nums[mid++], nums[low++]);
        else mid++;
    }
    for(int i: nums) cout<<i<<" ";
}