#include<bits/stdc++.h>
using namespace std;

void printNos(int N){
    if(N == 0){
        return;
    }else{
        cout<<N<<" ";
        printNos(N-1);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    printNos(10);
    return 0;
}