#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    vector<int> arr;
    int n,p;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        arr.push_back(x);
    }
    cin>>p;
    // unordered_map<int, int> map;
    // for (int i = 0; i < n; i++)
    //     map[arr[i]]++;
 
    // // Traverse through map and print frequencies
    // for (auto x : map)
    //     cout << x.first << " " << x.second << endl;


    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(int i=1;i<=p;i++){
        m[i]=m[i];
    }

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}