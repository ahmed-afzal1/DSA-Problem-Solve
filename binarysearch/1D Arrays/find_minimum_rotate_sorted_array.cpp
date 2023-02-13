#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    // set<int> st;
    // vector<int> result;

    // for(auto it:nums){
    //     st.insert(it);
    // }

    // for(auto it:st){
    //     result.push_back(it);
    // }
    
    // return result[0];

    // sort(nums.begin(), nums.end());
    // return nums[0];

    int s = 0;
    int e = nums.size()-1;

    while(s<e){
        int mid = s + e/2;

        if(nums[s]<nums[e]){
            return nums[s];
        }
        if(nums[mid]>=nums[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        
    }
    return nums[s];
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


    cout<<findMin(nums);

    return 0;
}