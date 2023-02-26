#include<bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    map<int,int> m;
    vector<int> ans;

    for(auto it : arr1)
    {
        m[it]++;
    }

    for(auto it :arr2)
    {
        while(m[it]--)
        {
            ans.push_back(it);
        }
        m.erase(it);
    }

    for(auto i : m)
    {
        while(i.second--)
        {
            ans.push_back(i.first);
        }
        
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    vector<int> arr1,arr2;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    vector<int> result = relativeSortArray(arr1,arr2);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}