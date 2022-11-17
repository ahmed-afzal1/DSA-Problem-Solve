#include<iostream>
#include<climits>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int a[n];

    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for(int i=0;i<=4;i++){
        cin >> a[i];
    }

    for(int i=0; i<=4; i++){
        maxNumber = max(maxNumber,a[i]);
    }

    for(int i=0; i<=4; i++){
        minNumber = min(minNumber,a[i]);
    }


    cout<<"Maximum Number is : "<<maxNumber<<endl;
    cout<<"Minimum Number is : "<<minNumber<<endl;

    return 0;
}