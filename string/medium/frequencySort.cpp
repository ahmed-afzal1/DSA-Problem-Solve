#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> mp;
    string ans;

    for(int i=0; i<s.size(); i++){
        mp[s[i]] ++;
    }

    vector<pair<int,char> > v;
    for(auto i:mp){
        v.push_back({i.second,i.first});
    }

    sort(v.begin(),v.end(),[](pair<int,char> &a,pair<int,char> &b ){
        return a.first > b.first;
    });

    for(auto i:v){
        while(i.first--){
            ans+=i.second;
        }
    }

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s,t;
    cin>>s;

    cout<<frequencySort(s);

    return 0;
}