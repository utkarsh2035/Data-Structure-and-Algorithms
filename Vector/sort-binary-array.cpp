// Use two pointer approach to sort a binary array
// put first variable to 0th place and second variable to (size-1)th place


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter elements of array (0's and 1's only): "<<endl;
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    } 
    int i = 0, j = size-1;
    while(i < j){
        if(nums[i] == 1 && nums[j] == 0) swap(nums[i], nums[j]);
        else if(nums[i] == 0 && nums[j] == 0) i++;
        else if(nums[i] == 1 && nums[j] == 1) j--;
        else{
            i++;
            j--;
        }
    }
    for(int i: nums) cout<<i<<" ";
}