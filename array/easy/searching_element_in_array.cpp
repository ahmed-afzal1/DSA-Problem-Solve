#include<bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K) 
{ 
    int start = 0;
    int end = N;
    for(int i=start; i<end; i++){
        int mid = start+end/2;
 
        if(arr[mid] == K){
            return 1;
        }
        if(arr[mid]<K){
            start = mid;
        }else{
            end = mid;
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    // vector<int> nums;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;

    cout<<searchInSorted(arr,n,k);
    return 0;
}