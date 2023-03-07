#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string result = s;
    for(int i=0; i<indices.size(); i++){
        int index = indices[i];
        result[index] = s[i];
    }

    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    vector<int> indices;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        indices.push_back(x);
    }

    string s;
    cin>>s;

    cout<<restoreString(s,indices);

    return 0;
}