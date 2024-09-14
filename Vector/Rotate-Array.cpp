// Rotate the given array by 'K' steps where 'K' is non negativ.
// Note-> 'k' can be greater than 'n as well where 'n is the size of the array.
// Leetcode(189)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePart(vector<int> &nums, int start, int end){
    while(start < end){
        swap(nums[start++], nums[end--]);
    }
}
int main(){
    int size;
    cout<<"enter size of vector: "<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter elements of vector: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    } 
    int k;
    cout<<"enter value of k: "<<endl;
    cin>>k;
    if(k >= size) k = k%size;
    reversePart(nums, size-k, size-1);
    reversePart(nums, 0, size-k-1);
    reversePart(nums, 0, size-1);
    for(int ele: nums) cout<<ele<<" ";
}