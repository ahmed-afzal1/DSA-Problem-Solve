#include<bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        ans.insert(ans.begin()+index[i],nums[i]);
    }

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m,n;
    cin>>m>>n;

    vector<int> nums,index;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        index.push_back(x);
    }

    vector<int> result = createTargetArray(nums,index);

    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}