#include<bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string,int>m;
    int c=0;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(m[arr[i]]==1)
        {
            c++;
            if(c==k)
                return arr[i];
        }
    }
    return "";
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<string> arr;

    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cin>>k;

    cout<<kthDistinct(arr,k);

    return 0;
}