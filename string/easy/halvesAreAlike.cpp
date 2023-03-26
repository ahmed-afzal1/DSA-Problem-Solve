#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';

}

bool halvesAreAlike(string s) {
    int half_len = s.size() / 2;
    int firstVCount = 0;
    int secondVCount = 0;

    for(int i=0; i<half_len; i++){
        if(isVowel(s[i])) firstVCount++;
        if(isVowel(s[i+half_len])) secondVCount++;
    }

    return firstVCount == secondVCount;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<halvesAreAlike(s);

    return 0;
}