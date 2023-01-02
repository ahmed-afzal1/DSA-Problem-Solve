#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    /*set<int> s;
    for(auto it:nums){
        s.insert(it);
    }
    
    int k=0;
    for(int x:s){
        nums[k]=x;
    }
    return s.size();*/

    int i=0;
    for(int j=1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }

    return i+1;
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

    int k = removeDuplicates(nums);

    cout<<k;
    

    return 0;
}