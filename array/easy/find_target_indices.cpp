#include<bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> result;
    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == target){
            result.push_back(i);
        }
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

    vector<int> result = targetIndices(nums,target);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}