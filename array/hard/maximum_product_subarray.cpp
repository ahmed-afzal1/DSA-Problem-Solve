#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int ans = nums[0];
    int max_prod = nums[0];
    int min_prod = nums[0];

    for(int i=1; i<nums.size(); i++){
        if(nums[i]<0){
            swap(max_prod,min_prod);
        }
        max_prod = max(nums[i],max_prod*nums[i]);
        min_prod = min(nums[i],min_prod*nums[i]);

        ans = max(max_prod,ans);
    }

    return ans;
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

    cout<<maxProduct(nums);

    return 0;
}