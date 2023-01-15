#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    vector<vector<int> > arr;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j =0; j<m; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    map<int, int> mp;

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j] == 1){
                mp[i] += arr[i][j];
            }
        }
    }

    int maxOne = 0;
    int rowNumber = 0;
    if(!mp.empty()){
        for(auto it:mp){
            if(it.second>maxOne){
                maxOne = it.second;
                rowNumber = it.first;
            }
        }
    }
    cout<<rowNumber;
    return 0;
}