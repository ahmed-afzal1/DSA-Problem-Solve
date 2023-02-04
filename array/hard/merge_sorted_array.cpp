#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m,n;
    cin>>m>>n;

    vector<int> nums1,nums2;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }


    for (int i = m; i<m+n;i++)
    {
        nums1[i] = nums2[i-m];
    }

    sort(nums1.begin(),nums1.end());

    for(auto it:nums1){
        cout<<it<<" ";
    }
    return 0;
}