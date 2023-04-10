#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    string ans;
    
    for(char c : s){
        if (!ans.empty() && ans.back() == c) {
            ans.pop_back();
        }else{
            ans.push_back(c); 
        }      
    }
            
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<removeDuplicates(s);
}