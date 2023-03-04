#include<bits/stdc++.h>
using namespace std;

string firstPalindrome(vector<string>& words) {
    string result = "";
    for(auto it:words){
        string tempString = "";
        for(int i=it.length()-1; i>=0; i--){
            tempString += it[i];
        }

        if(tempString == it){
            return tempString;
        }
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

    vector<string> words;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        words.push_back(x);
    }

    cout<<firstPalindrome(words);

    return 0;
}