#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum +=nums[i];
        result.push_back(sum);
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

    vector<int> result = runningSum(nums);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}