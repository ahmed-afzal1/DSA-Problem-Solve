#include<bits/stdc++.h>
using namespace std;

int minPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = INT_MIN;
    int len = nums.size();
    
    for(int i=0; i<len/2; i++)
    {
        int sub = nums[i] + nums[len-1-i];
        sum = max(sum,sub);
    }
    
    return sum;
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

    cout<<minPairSum(nums);

    return 0;
}