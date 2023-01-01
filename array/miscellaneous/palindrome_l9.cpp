#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n, reminder, result=0;
    cin>>n;
    int original = n;

    while(n>0)
    {
        reminder = n%10;
        result = result*10+reminder;
        n /=10;
    }

    if(original==result)
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
    
    return 0;
}