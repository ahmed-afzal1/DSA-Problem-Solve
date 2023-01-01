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
        large = max(large,arr[i]);
    }

    int secondLarge = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>secondLarge && arr[i] != large){
            secondLarge = max(secondLarge,arr[i]);
        }
    }

    if(secondLarge<0){
        secondLarge = -1;
    }
    cout<<secondLarge;



    return 0;
}