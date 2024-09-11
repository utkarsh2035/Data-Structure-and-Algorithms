// Linear Search -> In this searching algo we traverse all the elements of given array one by one and if targeted element is found , it means search is successfull.

#include<iostream>
using namespace std;
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
    int target, targetIdx;
    cout<<"enter targeted element: "<<endl;
    cin>>target;
    bool flag = false;
    for(int i = 0; i<size; i++){
        if(nums[i] == target){
            flag = true;
            targetIdx = i;
        }
    }
    if(flag == true) cout<<"target elemet "<<target<<" is found at index "<<targetIdx;
    else cout<<"target element not found";
}