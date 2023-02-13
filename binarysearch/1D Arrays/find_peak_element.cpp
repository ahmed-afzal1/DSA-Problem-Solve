#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {    
    int n = nums.size();

    int peak = 0;
    for(int i=1; i<n; i++){
        if(nums[i]>nums[i-1]){
            peak = max(peak,i);
        }
    }
    return peak;
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

    cout<<findPeakElement(nums);

    return 0;
}