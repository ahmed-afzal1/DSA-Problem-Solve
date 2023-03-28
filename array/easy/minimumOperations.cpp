#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int result = 0;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>0){
            int num = nums[i];
            result ++;

            for(int j=i; j<nums.size(); j++) nums[j] -= num;
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

    cout<<minimumOperations(nums);

    return 0;
}