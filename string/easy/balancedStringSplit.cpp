#include<bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
    int countR = 0;
    int countL = 0;
    int balancedStringCount = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'R'){
            countR++;
        }else{
            countL++;
        }

        if(countR == countL){
            balancedStringCount++;
            countR = 0;
            countL = 0;
        }
    }

    return balancedStringCount;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<balancedStringSplit(s);

    return 0;
}