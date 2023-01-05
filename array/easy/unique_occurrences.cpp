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

    map<int, int> mp,mp1;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
    }

    for(auto it:mp){
        mp1[it.second]++;
    }

    int occur = 0;
    int count = 0;
    for(auto it:mp1){
        if(it.second >1){
            count++;
        }
    }

    if(count>0){
        cout<<"false";
    }else{
        cout<<"true";
    }





  


    return 0;
}