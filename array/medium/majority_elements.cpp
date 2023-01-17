#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
    }

    int result;
    for(auto it:mp){
        if(it.second>nums.size()/2){
            result = it.first;
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


    cout<<majorityElement(nums);

    return 0;
}