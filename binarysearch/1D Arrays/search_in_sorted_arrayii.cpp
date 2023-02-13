#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {
    set<int> s;
    vector<int> result;

    for(auto it:nums){
        s.insert(it);
    }

    for(auto it:s){
        result.push_back(it);
    }

    int low = 0;
    int high = result.size() - 1;

    while (low<=high)
    {
        int mid = (low + high)/2;

        if(result[mid] == target) return true;
        if(target>result[mid]) low = mid + 1;
        else high = mid - 1;
    }
    
    return false;
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
    int target;
    cin>>target;

    cout<<search(nums,target);

    return 0;
}