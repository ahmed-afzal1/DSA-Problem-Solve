#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    map<int,int> mp;
    int n=nums.size();
    for(int i=0; i<n; i++){
        mp[nums[i]]++;
    }

    int singleNumber = 0;
    for(auto it:mp){
        if(it.second == 1){
            singleNumber = it.first;
        }
    }
    return singleNumber;
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
    
    cout<<singleNumber(nums);
    return 0;
}