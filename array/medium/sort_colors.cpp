#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    map<int, int> mp;
    vector<int> result;

    for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
    }

    for(auto it:mp){
        for(int i=0; i<it.second; i++){
            result.push_back(it.first);
        }
    }

    for(auto it:result){
        cout<<it<<" ";
    }
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

    sortColors(nums);

    return 0;
}