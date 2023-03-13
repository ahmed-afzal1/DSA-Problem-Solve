#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    string temp;
    int matchCount = 0;

    for(int i=1; i<strs.size(); i++){
        for(int j=0; j<strs[i].size(); j++){
            if(prefix[j] != ' '){
                if(prefix[j] == strs[i][j]){
                    cout<<strs[i][j]<<endl;
                    temp += strs[i][j];
                }else{
                    break;
                }
                
            }
        }

        if(!temp.empty()){
            matchCount++;
            prefix.erase();
            prefix = temp;
            temp.erase();
        }
    }

    if((matchCount == strs.size()-1) || (strs.size() == 1)){
        return prefix;
    }else{
        return "";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<string> strs;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }

    cout<<longestCommonPrefix(strs);

    return 0;
}