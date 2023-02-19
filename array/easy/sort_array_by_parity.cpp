#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> result;

    for(auto it:nums){
        if(it%2 ==0){
            result.push_back(it);
        }
    }

    for(auto it:nums){
        if(it%2 !=0){
            result.push_back(it);
        }
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

    vector<int> result = sortArrayByParity(nums);

    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}