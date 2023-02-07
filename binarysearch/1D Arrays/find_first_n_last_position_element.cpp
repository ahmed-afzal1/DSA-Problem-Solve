#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result;
    if(nums.empty()){
        result.push_back(-1);
        result.push_back(-1);
    }

    // int n = nums.size();
    // int low = 0;
    // int high = n - 1;

    // if(low<=high){
    //     int mid = (low + high)/2;
    //     if(nums[mid] == target){
    //         result.push_back(mid);
    //         result.push_back(mid+1);

    //         return result;
    //     }

    //     if(target>nums[mid]){
    //         low = mid + 1;
    //     }else{
    //         high = mid - 1;
    //     }
    // }else{
    //     result.push_back(-1);
    //     result.push_back(-1);

    //     return result;
    // }

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == target){
            if(target == 0){
                
            }
            result.push_back(i);
            result.push_back(i+1);

            return result;
        }
    }

    if(result.empty()){
        result.push_back(-1);
        result.push_back(-1);
    }

    return result;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int target;
    cin>>target;

    vector<int> result;

    result = searchRange(nums,target);

    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}