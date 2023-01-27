#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;

    int arr1[n], arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    set<int> st;
    vector<int> result;
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    
    for(int j=0; j<m; j++){
        st.insert(arr2[j]);
    }
    
    for(auto it:st){
        result.push_back(it);
    }
    
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}