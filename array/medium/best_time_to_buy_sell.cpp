#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mintilnow = prices[0];

    int profit = INT_MIN;

    for(int i=0;i<prices.size();i++)
    {
        if(mintilnow > prices[i]) mintilnow = prices[i];
        if(prices[i] - mintilnow > profit) profit = prices[i] - mintilnow;
        
    }
    return profit;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> prices;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        prices.push_back(x);
    }

    cout<<maxProfit(prices);

    return 0;
}