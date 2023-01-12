#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    int ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        int sum = arr[i];
        if(sum == k)
            ans++;
        
        for(int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if(sum == k)
                ans++;
        }
    }
    
    return ans;
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

    int k;
    cin>>k;
    cout<<subarraySum(nums,k);

    // int sum = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<nums[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second;
    // }


    return 0;
}