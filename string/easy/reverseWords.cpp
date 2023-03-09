#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int i=0;
    for(int j=0;j<s.length();j++)
    {
        if(s[j]==' ')
        {
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
        }
    }
    reverse(s.begin()+i,s.end());
    return s;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<reverseWords(s);

    return 0;
}