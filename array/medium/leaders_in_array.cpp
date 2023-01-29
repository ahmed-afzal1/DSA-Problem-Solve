#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> result;
    int max = a[n-1];

    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>=max){
            result.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(result.begin(),result.end());


    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}