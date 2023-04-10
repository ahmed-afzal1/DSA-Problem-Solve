#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;

    vector<int> nums1,nums2;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }

    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }

    vector<int> result = intersection(nums1, nums2);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}