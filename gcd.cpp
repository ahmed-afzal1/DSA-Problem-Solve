#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b;
    cin>>a>>b;
    int reminder = 0;

    cout<<a%b;
    while(b){
       reminder = a % b;
        a = b;
        b = reminder;
    }

    return 0;
}