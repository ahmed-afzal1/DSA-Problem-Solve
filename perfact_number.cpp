#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int sum = 1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            sum += i;
            sum += n/i;
        }
    }

    if(n == sum){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    

    return 0;
}