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
    

    long long low = 0;
    long long high = n-1;

    int result = -1;

    while(low <= high)
    {
        long long mid = low + (high - low)/2;
        if(nums[mid] > target)
            high = mid - 1;
        else
        {
            low = mid + 1;
            result = mid;
        }

    }

    return result == -1 ? -1 : result;

    if(result != 0){
        cout<<result;
    }else{
        cout<<"-1";
    }


    return 0;
}