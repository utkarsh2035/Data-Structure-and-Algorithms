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
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    int nums[size];
    cout<<"enter elements of array: "<<endl;
    for(int i = 0; i<size; i++){
        int x;
        cin>>x;
        nums[i] = x;
    }
    cout<<"Before Reverse: "<<endl;
    // for each loop
    for(int ele: nums) cout<<ele<<" ";
    cout<<endl;
    // A function which reverse the given array
    reverseArray(nums, size);
    cout<<"After Reverse: "<<endl;
    for(int ele: nums) cout<<ele<<" ";
}