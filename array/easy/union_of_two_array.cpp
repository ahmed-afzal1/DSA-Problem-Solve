#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    
    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }

    vector<int> result;

    for(auto it:st){
        result.push_back(it);
    }

    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    vector<int> result;

    result = findUnion(arr1,arr2,n,m);

    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}