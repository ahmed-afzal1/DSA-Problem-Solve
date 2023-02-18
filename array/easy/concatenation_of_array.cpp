#include<bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> result;
    int n = 1;

    while (n<=2)
    {
        for(auto it:nums){
            result.push_back(it);
        }
        n++;
    }
    
    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m;
    cin>>m;

    vector<int> nums;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }


    vector<int> result = getConcatenation(nums);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}