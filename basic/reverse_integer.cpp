#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;


    long long result = 0;
    while(n){
        int reminder = n % 10;
        n = n / 10;
        result =  reminder + (result * 10);

    }

    if(result<INT_MIN || result>INT_MAX){
        cout<<"here";
    }else{
        cout<<result<<" ";
    }


    return 0;
}