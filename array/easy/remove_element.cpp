#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != val){
            result.push_back(nums[i]);
        }
    }

    return result.size();
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

    cout<<removeElement(nums,n);
    return 0;
}