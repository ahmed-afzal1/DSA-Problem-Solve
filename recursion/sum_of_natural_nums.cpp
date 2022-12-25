#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long N) {
    if(N==1){
        return 1;
    }
    return (N*N*N)+sumOfSeries(N-1);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    cout<<sumOfSeries(5);
    return 0;
}