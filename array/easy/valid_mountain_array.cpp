#include<bits/stdc++.h>
using namespace std;

int validMountainArray(vector<int>& arr) {
      int n = arr.size(), i = 0, j = n - 1;
        while (i + 1 < n && arr[i] < arr[i + 1]) i++;
        while (j > 0 && arr[j - 1] > arr[j]) j--;
        return i > 0 && i == j && j < n - 1;
}

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

    cout<<validMountainArray(arr);

    return 0;
}