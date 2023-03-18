#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string t) {
    if(s.size() != t.size()) return false;

    map<char, int> mp1,mp2;

    for(auto it:s){
        mp1[it] ++;
    }

    for(auto it:t){
        mp2[it] ++;
    }

    // for(auto it:mp1){
    //     auto it2 = 
    // }

    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s,t;
    cin>>s>>t;

    map<char, int> mp1,mp2;

    for(auto it:s){
        mp1[it] ++;
    }

    for(auto it:t){
        mp2[it] ++;
    }

    for(auto it:mp1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it:mp1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<rotateString(s,t);

    return 0;
}