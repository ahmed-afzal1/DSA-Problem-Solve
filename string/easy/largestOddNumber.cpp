#include<bits/stdc++.h>
using namespace std;

string reverseWords1(string s) {
     if(s.size() == 0) return s;
        stack<string> stack;
        string result;

        for(int i=0; i<s.size(); i++) {
            string word;
            if(s[i]==' ') continue;

            while(i<s.size() && s[i]!=' ' ) {
                word += s[i]; i++;
            }
            stack.push(word);
        }
        
        while(!stack.empty()) {
            result += stack.top(); stack.pop();
            if(!stack.empty()) result += " ";
        }
        return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    string s = "the sky is blue";
    // cin>>s;

    cout<<reverseWords1(s);

    return 0;
}