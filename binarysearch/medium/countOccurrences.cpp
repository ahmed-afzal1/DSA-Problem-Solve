#include<bits/stdc++.h>
using namespace std;

int countOccurrences(vector<int>& nums, int target) {
    int left = leftOccurrence(nums,target);
    int right = rightOccurrence(nums,target);

    return (right - left) + 1;
}

int leftOccurrence(vector<int>& nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;

    int left = -1;
    
    while(low<= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            left = mid;
            high = mid-1;
        }else if(target>nums[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return left;
}

int rightOccurrence(vector<int>& nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;

    int right = -1;
    
    while(low<= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            right = mid;
            high = mid-1;
        }else if(target>nums[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return right;
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

    cout<<countOccurrences(nums,target);

    return 0;
}