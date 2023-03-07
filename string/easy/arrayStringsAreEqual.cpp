#include<bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string firstConcate = "";
    string secondConcate = "";

    for(auto it:word1){
        firstConcate += it;
    }

    for(auto it:word2){
        secondConcate += it;
    }

    if(firstConcate == secondConcate){
        return true;
    }

    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;

    vector<string> word1;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        word1.push_back(x);
    }

    vector<string> word2;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        word2.push_back(x);
    }


    cout<<arrayStringsAreEqual(word1,word2);

    return 0;
}