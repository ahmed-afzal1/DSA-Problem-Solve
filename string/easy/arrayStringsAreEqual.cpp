#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int k) {
    int result = 0;

    for(int i=0; i<nums.size(); i++){
        for(int j= i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                int mul = i*j;
                if(mul%k == 0){
                    result++;
                }
            }
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

    int k;
    cin>>k;

    cout<<countPairs(nums,k);

    return 0;
}