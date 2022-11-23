#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    return 0;
}