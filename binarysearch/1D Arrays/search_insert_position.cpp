#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {

    int low = 0;
    int high = nums.size() - 1;
    while(low<=high){
        int mid = (low + high)/ 2;
        if(nums[mid] == target)return mid;
        if(target>nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return high + 1;
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

    cout<<searchInsert(nums,target);

    return 0;
}