#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    map<int,int> mp;
    
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
    }

    int result = INT_MIN;
    for(auto it:mp){
        if(it.second == 1) result = it.first;
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
  
    cout<<singleNonDuplicate(nums);

    return 0;
}