#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(nums[i]);
    }

    for(int i=0; i<=n; i++){
        if(st.count(i) == 0)return i;
    }
    return -1;
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
    
    cout<<missingNumber(nums);
    return 0;
}