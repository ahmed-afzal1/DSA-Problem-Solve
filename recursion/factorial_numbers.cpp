#include<bits/stdc++.h>
using namespace std;

int factorialNumbers(int a){
    if(a == 1){
        return 1;
    }
    return a*factorialNumbers(a-1);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    cout<<factorialNumbers(5);
    
    return 0;
}