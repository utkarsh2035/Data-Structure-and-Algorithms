// Find the doublet(return index) in the given aray whose sun is equal to the given value x -> (Leetcode - 1)

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
    int target;
    cout<<"enter target element: "<<endl;
    cin>>target;
    vector<int> ans(2);
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(nums[i] + nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }
    cout<<"doublet of given element is: "<<"("<<ans[0]<<", "<<ans[1]<<")"<<endl;
}
