#include<bits/stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{
    long long  mx=-1;

    for(long long  i=0;i<N-1;i++){
        if(arr[i]+arr[i+1]>mx){
            mx=arr[i]+arr[i+1];
        }
    }
    return mx;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    long long N;
    cin>>N;

    long long arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    

    cout<<pairWithMaxSum(arr,N);

    return 0;
}