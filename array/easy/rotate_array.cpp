#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> nums;
    int newArr[n];

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cin>>k;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());


    for(auto it:nums){
        cout<<it<<" ";
    }




    return 0;
}