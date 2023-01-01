#include<iostream>
#include <vector>
#include<climits>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector< int > newArray;
    int sum = 0;
    int maxNumber = INT_MIN;
    int anotherVariable;
    int m = 0;

    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++){
                sum = sum + a[k];
            }
            anotherVariable = sum;
            sum = 0;
            m ++;
            newArray.push_back(anotherVariable);
        }
    }

    for(int l=0; l<m; l++){
        maxNumber = max(maxNumber,newArray[l]);
    }

    cout<<maxNumber;

    return 0;
}