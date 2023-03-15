#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char,int> mp1, mp2;
    
    for(int i=0; i<s.size(); i++){
        if(mp1[s[i]] != mp2[t[i]]) return false;

        mp1[s[i]] = i+1;
        mp2[t[i]] = i+1;
    }

    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s,t;
    cin>>s>>t;

    cout<<isIsomorphic(s,t);

    return 0;
}