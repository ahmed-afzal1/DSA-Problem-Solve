#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]<nums[i-1]){
            return false;
        }
    }

    return true;
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

    cout<<check(nums);

    return 0;
}