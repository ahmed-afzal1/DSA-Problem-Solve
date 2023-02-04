#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int size = nums.size();
    int low = 0;
    int high = size-1;

    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) return mid;
        else if(target>nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
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

    int size = nums.size();
    int low = 0;
    int high = size-1;
    int result = 0;

    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) result = mid;
        else if(target>nums[mid]) low = mid + 1;
        else high = mid - 1;
    }

    cout<<binarySearch(nums,target);

    return 0;
}