#include<bits/stdc++.h>
using namespace std;

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
    

    int sum =0;
    int maxSum = INT_MIN;
    for(auto it:nums){
        sum += it;
        maxSum = max(sum,maxSum);
        if(sum<0){
            sum = 0;
        }
    }

    cout<<maxSum;

    return 0;
}