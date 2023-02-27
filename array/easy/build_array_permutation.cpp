#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> result;
    for(int i=0; i<nums.size();i++){
        result.push_back(nums[nums[i]]);
    }
    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m;
    cin>>m;

    vector<int> nums;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    vector<int> result = buildArray(nums);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}