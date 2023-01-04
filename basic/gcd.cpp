#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // int a,b;
    // cin>>a>>b;
    // int reminder = 0;

    // cout<<a%b;
    // while(b){
    //    reminder = a % b;
    //     a = b;
    //     b = reminder;
    // }

    int n;
    cin>>n;

    vector<int> nums;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    sort(nums.begin(),nums.end());

    int firstValue = nums.back();
    int secondValue = nums.front();
    int remainder = 0;

    while (secondValue)
    {
        remainder = firstValue % secondValue;
        firstValue = secondValue;
        secondValue = remainder;
    }

    cout<<firstValue;
    

    return 0;
}