#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }


    int large = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    cout<<large;
    
    return 0;
}