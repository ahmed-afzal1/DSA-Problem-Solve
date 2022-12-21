#include<bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> arr,int student){
    sort(arr.begin(),arr.end());
    int min_diff = INT_MAX;

    for(int i=0; i+student-1<arr.size();i++){
        int diff = arr[i + student - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;

    vector<int> arr;
    vector<int> newArr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int student;
    cin>>student;

    cout<<"Minimum difference is :"<<findMinDiff(arr,student);

    return 0;

}