#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,count = 0;
    cin>>n;

    while(n>0){
        n = n /10;
        count++;

    }

    cout<<count<<" "<<endl;
    return 0;
}