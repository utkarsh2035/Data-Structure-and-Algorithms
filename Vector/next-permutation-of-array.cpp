// Next Permutation
// start from size-2 idx of array and find the pivot element(the first element which is less than its next element) and then reverse the array after that pivot elemnt and after reversing again swap the pivot element with just greater element in just reversed part of array
// leetcode 31

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter elements of array: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    } 

    int idx = -1;
    for(int i = size-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(nums.begin(), nums.end());
    }
    else{
        reverse(nums.begin()+idx+1, nums.end());
        for(int j = idx+1; j<size; j++){
            if(nums[idx] < nums[j]){
                swap(nums[idx], nums[j]);
                break;
            }
        }
    }
    cout<<"next permutation is: "<<endl;
    for(int ele: nums) cout<<ele<<" ";
}