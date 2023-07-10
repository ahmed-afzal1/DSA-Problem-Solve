#include<bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    return is_sorted(nums.begin(),nums.end()) || is_sorted(nums.begin(),nums.end(),greater<int>());
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
        

    cout<<isMonotonic(nums);

}