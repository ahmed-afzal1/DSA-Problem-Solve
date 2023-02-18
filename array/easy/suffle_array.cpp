#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result;

    int y = n;
    for(int i=0; i<n; i++){
        result.push_back(nums[i]);
        result.push_back(nums[y]);
        y++;
    }

    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m;
    cin>>m;

    vector<int> nums;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int n;
    cin>>n;

    vector<int> result = shuffle(nums,n);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}