#include<bits/stdc++.h>
using namespace std;

void printGfg(int N){
    if(N == 0){
        return;
    }else{
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    printGfg(5);

    return 0;
}