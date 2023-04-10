#include<bits/stdc++.h>
using namespace std;

int percentageLetter(string s, char letter) {
    int count = 0;
    int size = s.size();

    for(int i=0; i<s.size(); i++){
        if(s[i] == letter){
            count ++;
        }
    }

    if(count == 0){
        return 0;
    }

    return (count*100)/size;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    char letter;
    cin>>letter;

    cout<<percentageLetter(s,letter);

    return 0;
}