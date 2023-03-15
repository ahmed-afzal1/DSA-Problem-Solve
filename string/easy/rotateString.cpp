#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if(s.size() != goal.size()) return false;

    for(int i=0; i<s.size(); i++){
        if(s == goal) return true;

        char sLetter = s[0];
        s.erase(0,1);
        s.push_back(sLetter);
    }

    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s,goal;
    cin>>s>>goal;

    cout<<rotateString(s,goal);

    return 0;
}