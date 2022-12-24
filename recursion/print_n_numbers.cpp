#include<bits/stdc++.h>
using namespace std;

void printNumbers(int N){
    if(N == 0){
        return;
    }else{
        printNumbers(N-1);
        cout<<N<<" ";
    }

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    printNumbers(10);

    return 0;
}