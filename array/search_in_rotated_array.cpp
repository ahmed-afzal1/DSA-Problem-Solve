#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size();


    while(s<=e){
        int mid = (s + e)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid]<target){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }
    
    // for(int i=0; i<nums.size(); i++){
    //     if(nums[i]==target){
    //         return i;
    //     }
    // }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    vector<int> nums;
    int target,n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cin>>target;

    cout<<search(nums,target)<<endl;
    return 0;
}