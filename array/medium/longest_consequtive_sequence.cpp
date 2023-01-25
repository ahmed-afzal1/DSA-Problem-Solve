#include<bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int>& prices) {
//     int mintilnow = prices[0];

//     int profit = INT_MIN;

//     for(int i=0;i<prices.size();i++)
//     {
//         if(mintilnow > prices[i]) mintilnow = prices[i];
//         if(prices[i] - mintilnow > profit) profit = prices[i] - mintilnow;
        
//     }
//     return profit;
// }

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

    sort(nums.begin(),nums.end());

    int maxLen = 0, counter = 1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]+1){
            counter ++;
        }else{
            maxLen = max(maxLen,counter);
            counter = 1;
        }
    }
    maxLen = max(maxLen,counter);
    cout<<maxLen;

    return 0;
}