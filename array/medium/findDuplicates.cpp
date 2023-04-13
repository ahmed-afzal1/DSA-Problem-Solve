#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    map<int,int> mp;
    vector<int> result;

    for(auto it:nums){
        mp[it]++;
    }

    for(auto it:mp){
        if(it.second == 2){
            result.push_back(it.first);
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

    vector<int> result = findDuplicates(nums);
    for(auto it:result){
        cout<<it<<" ";
    }


    return 0;
}