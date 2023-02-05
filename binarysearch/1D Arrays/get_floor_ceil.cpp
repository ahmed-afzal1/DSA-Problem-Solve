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

    int target;
    cin>>target;

    int floor=-1,ceil=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<=target)
            floor= max(floor,nums[i]);
        if(nums[i]>=target)
            ceil=min(ceil,nums[i]);
    }
    if(ceil==INT_MAX)
        ceil = -1;
    
    cout<<floor<<" "<<ceil;


    return 0;
}