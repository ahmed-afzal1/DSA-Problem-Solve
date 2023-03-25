#include<bits/stdc++.h>
using namespace std;

vector<string> stringMatching(vector<string>& words) {
    vector<string> result;
    for(auto i:words){
        for(auto j:words){
            if(i == j) continue;
            if(j.find(i) != -1){
                result.push_back(i);
            }
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


    vector<string> result = stringMatching(words);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}