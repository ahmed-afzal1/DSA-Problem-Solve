#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    string s = "A man, a plan, a canal: Panama";
    int n = s.size();

    // for(int i=0; i<=n/2; i++){
    //     swap(s[i],s[n-1-i]);
    // }


    // for(int i=0; i<n; i++){
    //     if(!isalpha(s[i]))
    //         s.erase(i);
    // }

    cout<<s;

    return 0;
}