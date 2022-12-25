#include<bits/stdc++.h>
using namespace std;

void FaboSeries(){
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n,temp;
    cin>>n;

    int a=0, b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=2; i<=n; i++){
        temp = a+b;
        a = b;
        b = temp;

        cout<<temp<<" ";
    }
    return 0;
}