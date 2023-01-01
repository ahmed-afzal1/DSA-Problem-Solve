#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr, int n, int key){
    int s=0;
    int e=n;

    while(s<n){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]>key){
            e = mid-1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}