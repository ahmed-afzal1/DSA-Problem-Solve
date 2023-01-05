#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxOnes = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1){
            count++;
        }
        
        if(nums[i] == 0){
            maxOnes = max(maxOnes,count);
            count = 0;
        }
    }

    return max(maxOnes,count);
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

    cout<<findMaxConsecutiveOnes(nums);


    return 0;
}