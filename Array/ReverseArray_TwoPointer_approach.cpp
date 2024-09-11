// Reverse an array by using Two Pointer approach

// In this approach we use two pointers first pointer is placed in 0th index and last pointer is placed in nth index

// in each iteration we reduce these pointers unitill "first pointer == last pointer"

#include<iostream>
using namespace std;
void reverseArray(int nums[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
int main(){
    int nums[] = {1,2,3,4,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    cout<<"Before Reverse: "<<endl;
    // for each loop
    for(int ele: nums) cout<<ele<<" ";
    cout<<endl;
    // A function which reverse the given array
    reverseArray(nums, size);
    cout<<"After Reverse: "<<endl;
    for(int ele: nums) cout<<ele<<" ";
}