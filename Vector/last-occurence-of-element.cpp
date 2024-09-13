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
    cout<<"enter element to find it's last occurence: "<<endl;
    cin>>target;
    int lastOccurence = -1;
    for(int i = size-1; i>=0; i--){
        if(nums[i] == target){
            lastOccurence = i;
            break;
        }
    }
    cout<<"last occurence of element is at index: "<<lastOccurence<<endl;
}
