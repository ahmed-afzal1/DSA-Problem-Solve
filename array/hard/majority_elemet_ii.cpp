#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    vector<int> nums,result;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    map<int, int> mp;
    int times = nums.size()/3;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
    }

    for(auto it:mp){
        if(it.second> times){
            result.push_back(it.first);
        }
    }

    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}