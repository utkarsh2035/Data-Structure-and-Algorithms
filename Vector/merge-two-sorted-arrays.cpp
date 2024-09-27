// Merge sorted array
// there are two sorted arrays and size of first array is m+n where m is no of elements in first array and n is no of elements in second array
// you don't need to create a new array update only first array
// you can solve this problem by using three pointer approach put first pointer at m-1, second pointer at n-1 and third one at m+n-1 
// leetcode 88

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size1;
    cout<<"enter size(total size after merging) of first array: "<<endl;
    cin>>size1;
    vector<int> nums1(size1);
    int m, n;
    cout<<"enter no of elements of first array: "<<endl;
    cin>>m;
    cout<<"enter elements of first array: "<<endl;
    for(int i = 0; i<size1; i++){
        cin>>nums1[i];
    } 
    int size2;
    cout<<"enter size of second array: "<<endl;
    cin>>size2;
    vector<int> nums2(size2);
    cout<<"enter no of elements of second array: "<<endl;
    cin>>n;
    cout<<"enter elements of second array: "<<endl;
    for(int i = 0; i<size2; i++){
        cin>>nums2[i];
    } 
    int i = m-1, j = n-1, k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
    if(i<0){
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
    for(int i: nums1) cout<<i<<" ";
}