#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n) {
    int counter = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i+1]>=arr[i]){
            counter ++;
        }
    }
    if(counter == n-1){
        return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<arraySortedOrNot(arr,n);
    
    return 0;
}