#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int sum = 0;
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (prefixSum.count(sum - k)) {
            res += prefixSum[sum - k];
        }
        prefixSum[sum]++;
    }
    return res;
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

    int k;
    cin>>k;
    cout<<subarraySum(nums,k);

    // int sum = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<nums[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second;
    // }


    return 0;
}